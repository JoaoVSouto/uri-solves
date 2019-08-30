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
        matrix[i][j] = 0;
      }
    }

    // fill the main diagonal with 1
    for (i = 0; i < N; i++) {
      for (j = 0; j < N; j++) {
        if (i != j) continue;
        matrix[i][j] = 1;
      }
    }

    int counter = 1;

    while (counter <= N - 1) {
      for (i = 0; i < N - counter; i++) {
        for (j = counter; j < N; j++) {
          if (i + 1 != j) continue;
          matrix[i][j] = counter + 1;
        }
      }

      counter++;
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
