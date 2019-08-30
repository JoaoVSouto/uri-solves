#include <stdio.h>

#define SIZE 10

void printMatrix(short matrix[SIZE][SIZE]) {
  short i, j;

  for (i = 0; i < SIZE; i++) {
    for (j = 0; j < SIZE; j++) {
      printf("%hd ", matrix[i][j]);
    }
    printf("\n");
  }
}

int main() {
  char entry;
  short matrix[SIZE][SIZE] = {{0}};
  short position[] = {SIZE - 1, 0};
  short orientation = 0;
  char* positions[] = {"norte", "leste", "sul", "oeste"};

  matrix[position[0]][position[1]] = 1;
  printMatrix(matrix);

  while (1) {
    scanf(" %c", &entry);

    if (entry == 'q') break;

    if (entry == 'M') {
      switch (orientation) {
        case 0:
          position[0] -= 1;
          if (position[0] < 0 || position[0] >= SIZE) {
            position[0] += 1;
          }
          break;
        case 1:
          position[1] += 1;
          if (position[1] < 0 || position[1] >= SIZE) {
            position[1] -= 1;
          }
          break;
        case 2:
          position[0] += 1;
          if (position[0] < 0 || position[0] >= SIZE) {
            position[0] -= 1;
          }
          break;
        case 3:
          position[1] -= 1;
          if (position[1] < 0 || position[1] >= SIZE) {
            position[1] += 1;
          }
          break;
      }
    }

    if (entry == 'D') {
      orientation += 1;
      if (orientation > 3) orientation = 0;
    }

    if (entry == 'E') {
      orientation -= 1;
      if (orientation < 0) orientation = 3;
    }

    printf("orientação: %s\n", positions[orientation]);

    matrix[position[0]][position[1]] = 1;
    printMatrix(matrix);
  }

  return 0;
}
