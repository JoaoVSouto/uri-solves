#include <stdio.h>

#define SIZE 20

int main() {
  short i;
  int N[SIZE];

  for (i = 0; i < SIZE; i++) {
    scanf("%d", &N[i]);
  }

  for (i = 0; i < SIZE; i++) {
    printf("N[%hd] = %d\n", i, N[19 - i]);
  }

  return 0;
}
