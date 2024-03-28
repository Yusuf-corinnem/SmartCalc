#include <check.h>

#include "s21_smartcalc.h"

START_TEST(simple) {
  char *str = "(56+11*6-33^2)mod4*(-1)\0";
  long double reza = run(str);
  ck_assert_double_eq(reza, -1);
}
END_TEST

START_TEST(trig) {
  char *str =
      "sin(10)+cos(9)-tan(8)*acos(0.8)/asin(0.5)-atan(1)/"
      "ln(2)^log(9)-sqrt(2)\0";
  long double reza = run(str);
  ck_assert_double_eq_tol(reza, -1.53985, 6);
}
END_TEST

START_TEST(brackets_1) {
  char *str =
      "sin(10)+cos(9)-tan(8)*acos(0.8)/asin(0.5)-atan(1)/ln(2)^log(9)))))(\0";
  int reza = number_of_brackets(str);
  ck_assert_int_eq(reza, 1);
}
END_TEST

START_TEST(brackets_2) {
  char *str =
      ")sin(10)+cos(9)-tan(8)*acos(0.8)/asin(0.5)-atan(1)/ln(2)^log(9)\0";
  int reza = number_of_brackets(str);
  ck_assert_int_eq(reza, 1);
}
END_TEST

START_TEST(ann_month) {
  double S = 10000;
  double P = 9;
  int N = 12;
  double reza = ras_ann(S, P, N);
  ck_assert_double_eq_tol(reza, 874.51, 6);
}
END_TEST

START_TEST(ann_total) {
  double S = 10000;
  double P = 9;
  int N = 12;
  double reza = all_ras_ann(S, P, N);
  ck_assert_double_eq_tol(reza, 10494.12, 6);
}
END_TEST

START_TEST(dif_first_month) {
  double S = 10000;
  double P = 9;
  int N = 12;
  double reza = ras_dif(S, P, N, 0);
  ck_assert_double_eq_tol(reza, 908.33, 6);
}
END_TEST

START_TEST(dif_last_month) {
  double S = 10000;
  double P = 9;
  int N = 12;
  double reza = ras_dif(S, P, N, 11);
  ck_assert_double_eq_tol(reza, 839.58, 6);
}
END_TEST

START_TEST(dif_total) {
  double S = 10000;
  double P = 9;
  int N = 12;
  double reza = all_ras_dif(S, P, N);
  ck_assert_double_eq_tol(reza, 10487.50, 6);
}
END_TEST

int main() {
  Suite *s1 = suite_create("s21_smartcalc");
  TCase *tc1_1 = tcase_create("s21_smartcalc");
  SRunner *sr = srunner_create(s1);
  int nf = 0;
  suite_add_tcase(s1, tc1_1);

  tcase_add_test(tc1_1, simple);
  tcase_add_test(tc1_1, trig);
  tcase_add_test(tc1_1, brackets_1);
  tcase_add_test(tc1_1, brackets_2);
  tcase_add_test(tc1_1, ann_month);
  tcase_add_test(tc1_1, ann_total);
  tcase_add_test(tc1_1, dif_first_month);
  tcase_add_test(tc1_1, dif_last_month);
  tcase_add_test(tc1_1, dif_total);

  srunner_run_all(sr, CK_ENV);
  nf = srunner_ntests_failed(sr);
  srunner_free(sr);

  return nf == 0 ? 0 : 1;
}
