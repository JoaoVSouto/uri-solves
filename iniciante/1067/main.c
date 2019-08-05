#include <stdio.h>

int main() {
  int x, i;
  scanf("%d", &x);
  for (i = 0; i < x; i++) {
    if (i % 2 != 0) {
      printf("%d\n", (i));
    }
  }
  if (x % 2 != 0) {
    printf("%d\n", (x));
  }

  return 0;
}

//gcc main.c -o main && ./main