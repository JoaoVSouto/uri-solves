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
      int internalMatrixes = (int)floor(N / 2.0) - 1;
      int internalN = 2, aux = 1;

      while (internalMatrixes > 0) {
        for (i = aux; i < N - aux; i++) {
          for (j = aux; j < N - aux; j++) {
            matrix[i][j] = internalN;
          }
        }

        internalN++;
        aux++;
        internalMatrixes--;
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
      if (j == size - 1)
        printf("%3d", matrix[i][j]);
      else
        printf("%3d ", matrix[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}
