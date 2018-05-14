// http://informatics.mccme.ru/mod/statements/view3.php?id=253&chapterid=156
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

void readData(int n) {
  if (n == 0) return;
  int a;
  scanf("%d", &a);
  readData(n - 1);
  printf("%d ", a);
}

int main() {
  int n;
  scanf("%d", &n);
  readData(n);
  //getchar();
  //getchar();
  return 0;
}