#include <stdio.h>

#define SIZE 10

int main() {
  short entry, N[SIZE], i;

  scanf("%hd", &entry);

  N[0] = entry;

  printf("N[0] = %hd\n", N[0]);

  for (i = 1; i < SIZE; i++) {
    N[i] = N[i - 1] * 2;
    printf("N[%hd] = %hd\n", i, N[i]);
  }

  return 0;
}
