#ifndef S21_SMARTCALC_H
#define S21_SMARTCALC_H

#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TOP A->length - 1

typedef struct stack {  // stashMAN
  char stack[255];
  int length;
} stack;

typedef struct stack_num {
  double num[10];
  int length;
} stack_num;

// STACK
void push(stack* A, char value);
void push2(stack_num* A, double stack);
char pop(stack* A);
double pop2(stack_num* A);
void initialize(stack* A);

// PARSING
void remove_spaces(char* str);
int number_of_brackets(const char* str);
char* compress(char* str);
void calc_oper(stack_num* A, char oper, long double o1, long double o2,
               long double t);

// LOGIC
int get_priority(char oper);
char* convert_in_polish(char* str, char* reza, stack* A);
double calculation(char* str);
long double run(const char* str);

// CREDIT
double ras_ann(double S, double P, int N);
double all_ras_ann(double S, double P, int N);
double ras_dif(double S, double P, int N, int i);
double all_ras_dif(double S, double P, int N);

#endif  // S21_SMARTCALC_H
