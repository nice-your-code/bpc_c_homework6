// http://informatics.mccme.ru/mod/statements/view3.php?id=277&chapterid=312
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

int phi(int n) {
  if (n < 2)
    return 1;
  return phi(n - 1) + phi(n - 2);
}

int main() {
  int a;
  scanf("%d", &a);
  printf("%d", phi(a));
  //getchar();
  //getchar();
  return 0;
}