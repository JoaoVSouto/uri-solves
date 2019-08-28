#include <math.h>
#include <stdio.h>

void printMatrix(int size, int matrix[size][size]);

int main() {
  int N;

  while (1) {
    scanf("%d", &N);

    if (!N) break;

    int matrix[N][N], i, j;

    for (i = 0; i < N; i++) {
      for (j = 0; j < N; j++) {
        matrix[i][j] = 1;
      }
    }

    if (N >= 4) {
      int counter = (int)floor(N / 2.0) - 1;

      printf("%d\n", counter);

      while (counter > 0) {
        int internalN = (int)floor(N / 2.0);

        for (i = 1; i < N - 1; i++) {
          for (j = 1; j < N - 1; j++) {
            matrix[i][j] = internalN;
          }
        }

        counter--;
      }
    }

    if (N % 2) {  // if N is odd
      int middle = N / 2;
      matrix[middle][middle] = middle + 1;
    }

    printMatrix(N, matrix);
  }
  return 0;
}

void printMatrix(int size, int matrix[size][size]) {
  int i, j;
  for (i = 0; i < size; i++) {
    for (j = 0; j < size; j++) {
      printf("%3d ", matrix[i][j]);
    }
    printf("\n");
  }
}
