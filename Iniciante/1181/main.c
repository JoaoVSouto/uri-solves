#include <stdio.h>

#define MATRIX_SIZE 12

void flushStdin() {
  int c;
  while ((c = getchar()) != '\n' && c != EOF)
    ;
}

int main() {
  float matrix[MATRIX_SIZE][MATRIX_SIZE], sum = 0, average;
  int lineDesired, i, j;
  char opDesired;

  scanf("%d", &lineDesired);
  flushStdin();
  scanf("%c", &opDesired);

  // read lines for matrix
  for (i = 0; i < MATRIX_SIZE; i++) {
    for (j = 0; j < MATRIX_SIZE; j++) {
      scanf("%f", &matrix[i][j]);
    }
  }

  // sum the lines chosen by the user
  for (i = 0; i < MATRIX_SIZE; i++) {
    sum += matrix[lineDesired][i];
  }

  if (opDesired == 'S') {
    printf("%.1f\n", sum);
  } else {
    average = sum / MATRIX_SIZE;
    printf("%.1f\n", average);
  }

  return 0;
}
