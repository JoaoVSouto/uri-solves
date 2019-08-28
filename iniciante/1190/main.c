#include <stdio.h>

#define SIZE 12

double sumMatrix(double matrix[SIZE][SIZE], short *counter) {
  double sum = 0;
  short i, j;

  for (i = 0; i < SIZE; i++) {
    for (j = 0; j < SIZE; j++) {
      if (i <= SIZE / 2 - 1) {
        if (j <= SIZE - 1 - i) continue;
      } else {
        if (j <= i) continue;
      }
      sum += matrix[i][j];
      *counter += 1;
    }
  }

  return sum;
}

int main() {
  double N[SIZE][SIZE], result;
  char O;
  short i, j, counter = 0;

  scanf("%c", &O);

  for (i = 0; i < SIZE; i++) {
    for (j = 0; j < SIZE; j++) {
      scanf("%lf", &N[i][j]);
    }
  }

  result = sumMatrix(N, &counter);

  if (O == 'M') {
    result /= counter;
  }

  printf("%.1lf\n", result);

  return 0;
}
