#include <stdio.h>

void fillUpperArea(int size, int matrix[size][size]);
void fillLowerArea(int size, int matrix[size][size]);
void fillMainDiagonal(int size, int matrix[size][size]);
void printMatrix(int size, int matrix[size][size]);

int main() {
  int N;

  while (1) {
    scanf("%d", &N);

    if (!N) break;

    int matrix[N][N];

    fillMainDiagonal(N, matrix);

    fillUpperArea(N, matrix);
    fillLowerArea(N, matrix);

    printMatrix(N, matrix);
  }

  return 0;
}

void fillUpperArea(int size, int matrix[size][size]) {
  int counter = 1;

  while (counter <= size - 1) {
    int x = 0, y = counter;

    while (y <= size - 1) {
      matrix[x][y] = counter + 1;
      x += 1;
      y += 1;
    }

    counter++;
  }
}

void fillLowerArea(int size, int matrix[size][size]) {
  int counter = 1;

  while (counter <= size - 1) {
    int x = counter, y = 0;

    while (x <= size - 1) {
      matrix[x][y] = counter + 1;
      x += 1;
      y += 1;
    }

    counter++;
  }
}

void fillMainDiagonal(int size, int matrix[size][size]) {
  int i, j;

  for (i = 0; i < size; i++) {
    for (j = 0; j < size; j++) {
      if (i != j) continue;
      matrix[i][j] = 1;
    }
  }
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
