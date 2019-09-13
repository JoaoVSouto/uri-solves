#include <stdio.h>
#include <stdlib.h>

void displayMatrix(int rows, int columns, float **matrix) {
  int row, column;
  for (row = 0; row < rows; row++) {
    printf("%d aluno: ", row + 1);
    for (column = 0; column < columns; column++) {
      printf("%.2f     ", matrix[row][column]);
    }
    printf("\n");
  }
}

int main() {
  int i, j;
  int qtdAlunos, qtdNotas;
  float **matrix, sum = 0;

  printf("Digite a quantidade de alunos da turma: ");
  scanf("%d", &qtdAlunos);

  printf("Digite a quantidade de notas da turma: ");
  scanf("%d", &qtdNotas);

  qtdNotas += 1;

  matrix = (float **)calloc(qtdAlunos, sizeof(float *));

  for (i = 0; i < qtdAlunos; i++) {
    matrix[i] = (float *)calloc(qtdNotas, sizeof(float));
  }

  for (i = 0; i < qtdAlunos; i++) {
    printf("Aluno %d: \n", i + 1);
    for (j = 0; j < qtdNotas - 1; j++) {
      printf("Digite a %dª nota do aluno %d: ", j + 1, i + 1);
      scanf("%f", &matrix[i][j]);

      sum += matrix[i][j];

      if (j == qtdNotas - 2) {
        matrix[i][j + 1] = sum / (qtdNotas - 1);
      }
    }
    sum = 0;
  }

  displayMatrix(qtdAlunos, qtdNotas, matrix);

  for (i = 0; i < qtdAlunos; i++) {
    free(matrix[i]);
  }

  free(matrix);

  return 0;
}
