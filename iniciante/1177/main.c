#include <stdio.h>

#define SIZE 1000

int main() {
  short T, i, j;

  scanf("%hd", &T);

  for (i = 0; i < SIZE;) {
    for (j = 0; j < T; j++) {
      printf("N[%hd] = %hd\n", i, j);
      i++;
      if (i >= SIZE) break;
    }
  }

  return 0;
}
