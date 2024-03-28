#include "../s21_smartcalc.h"

int get_priority(char oper) {
  int priority = 0;
  switch (oper) {
    case '+':
    case '-':
      priority = 1;
      break;
    case '*':
    case '/':
      priority = 2;
      break;
    case '^':
      priority = 3;
      break;
    case 'm':  // mod(%)
    case 's':  // sin
    case 'c':  // cos
    case 't':  // tan
    case 'a':  // acos
    case 'n':  // asin
    case 'g':  // atan
    case 'q':  // sqrt
    case 'l':  // ln
    case 'o':  // log
      priority = 4;
      break;
    case '(':
      priority = 5;
      break;
  }
  return priority;
}

char* convert_in_polish(char* str, char* res, stack* A) {
  int j = 0;
  str = compress(str);
  for (int i = 0; i < (int)strlen(str); i++, j++) {
    if (str[i] == '(' && str[i + 1] == '-') {
      i++;
      while (str[i] != ')') res[j++] = str[i++];
      if (str[i + 1] != '\0')
        i++;
      else
        break;
    }
    if (isdigit(str[i]) || str[i] == '.') {
      res[j] = str[i];
    } else {
      if (get_priority(str[i]) > 0 &&
          get_priority(str[i]) > get_priority(A->stack[TOP]))
        push(A, str[i]);  // Y > X, то Y закидывает в стек
      else if (get_priority(str[i]) <= get_priority(A->stack[TOP])) {
        if (A->stack[TOP] != '(' && str[i] != ')') {
          while (get_priority(str[i]) <= get_priority(A->stack[TOP])) {
            if (A->stack[TOP] == '(') break;
            res[j++] = ' ';
            res[j++] = A->stack[TOP];
            pop(A);
          }
        } else if (str[i] == ')') {
          while (A->stack[TOP] != '(') {
            res[j++] = ' ';
            res[j++] = A->stack[TOP];
            pop(A);
          }
          pop(A);
          if (strchr("sctangqlo", A->stack[TOP])) {
            res[j++] = ' ';
            res[j++] = A->stack[TOP];
            pop(A);
          }
        }
        if (str[i] != ')') push(A, str[i]);
      }
      res[j] = ' ';
    }
  }
  while (A->length != 0) {
    res[j++] = ' ';
    res[j++] = pop(A);
  }
  remove_spaces(res);
  free(str);
  return res;
}

double calculation(char* str) {
  stack_num A = {0};
  char str_atoi[20] = {'\0'};
  for (int i = 0; i < (int)strlen(str); i++) {
    if (isdigit(str[i]) || (str[i] == '-' && isdigit(str[i + 1]))) {
      int j = 0;
      while ((str[i] != ' ')) {
        str_atoi[j++] = str[i++];
        if (i == (int)strlen(str)) {
          break;
        }
      }
      str_atoi[j] = '\0';
      push2(&A, atof(str_atoi));
      memset(str_atoi, 0, sizeof(str_atoi));
    }
    if (strchr("m+-*/^sctangqlo", str[i]) && str[i] != '\0') {
      long double operand2 = 0, operand1 = 0, trigan = 0;
      if (strchr("sctangqlo", str[i]) && str[i] != '\0') {
        trigan = pop2(&A);
      } else {
        operand2 = pop2(&A);
        operand1 = pop2(&A);
      }
      calc_oper(&A, str[i], operand1, operand2, trigan);
    }
  }
  return pop2(&A);
}