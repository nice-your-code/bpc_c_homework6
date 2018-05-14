// http://informatics.mccme.ru/mod/statements/view3.php?id=277&chapterid=307
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

double power(double a, int n) {
  if (n == 0)
    return 1;
  return a * power(a, n - 1);
}

int main() {
  double a; int n;
  scanf("%lf%d", &a, &n);
  printf("%lf", power(a, n));
  //getchar();
  //getchar();
  return 0;
}