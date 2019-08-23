#include <stdio.h>

#define SIZE 12

float sumMatrix(float matrix[SIZE][SIZE], short *counter) {
  float sum = 0;
  short i, j;

  for (i = 0; i < SIZE; i++) {
    for (j = 0; j < SIZE; j++) {
      if (i >= j) continue;
      sum += matrix[i][j];
      *counter = *counter + 1;
    }
  }

  return sum;
}

int main() {
  float N[SIZE][SIZE], result;
  char O;
  short i, j, counter = 0;

  scanf("%c", &O);

  for (i = 0; i < SIZE; i++) {
    for (j = 0; j < SIZE; j++) {
      scanf("%f", &N[i][j]);
    }
  }

  result = sumMatrix(N, &counter);

  if (O == 'M') {
    result = result / counter;
  }

  printf("%.1f\n", result);

  return 0;
}
