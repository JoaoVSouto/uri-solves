#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int aleatorio() {
  int n;

  n = rand() % 100 + 1;

  return n;
}

void displayMatrix(int size, int **matrix) {
  int row, columns;
  for (row = 0; row < size; row++) {
    for (columns = 0; columns < size; columns++) {
      printf("%d     ", matrix[row][columns]);
    }
    printf("\n");
  }
}

int main() {
  int i, j, k, qtdLinhaColuna;
  int **matrizA, qtdLinhaMatrizA, qtdColunaMatrizA;
  int **matrizB, qtdLinhaMatrizB, qtdColunaMatrizB;
  int **matrizC;

  srand(time(0));

  printf("Digite a quantidade de linhas e colunas das matrizes: ");
  scanf("%d", &qtdLinhaColuna);

  qtdLinhaMatrizA = qtdColunaMatrizA = qtdLinhaMatrizB = qtdColunaMatrizB = qtdLinhaColuna;

  matrizA = (int **)calloc(qtdLinhaMatrizA, sizeof(int *));

  for (i = 0; i < qtdLinhaMatrizA; i++) {
    matrizA[i] = (int *)calloc(qtdColunaMatrizA, sizeof(int));
  }

  // setting random numbers on matrizA
  for (i = 0; i < qtdLinhaMatrizA; i++) {
    for (j = 0; j < qtdColunaMatrizA; j++) {
      matrizA[i][j] = aleatorio();
    }
  }

  matrizB = (int **)calloc(qtdLinhaMatrizB, sizeof(int *));

  for (i = 0; i < qtdLinhaMatrizB; i++) {
    matrizB[i] = (int *)calloc(qtdColunaMatrizB, sizeof(int));
  }

  // setting random numbers on matrizB
  for (i = 0; i < qtdLinhaMatrizB; i++) {
    for (j = 0; j < qtdColunaMatrizB; j++) {
      matrizB[i][j] = aleatorio();
    }
  }

  matrizC = (int **)calloc(qtdLinhaColuna, sizeof(int *));

  for (i = 0; i < qtdLinhaColuna; i++) {
    matrizC[i] = (int *)calloc(qtdLinhaColuna, sizeof(int));
  }

  for (i = 0; i < qtdLinhaColuna; i++) {
    for (j = 0; j < qtdLinhaColuna; j++) {
      for (k = 0; k < qtdLinhaColuna; k++) {
        matrizC[i][j] += matrizA[i][k] * matrizB[k][j];
      }
    }
  }

  printf("Matriz A: \n");
  displayMatrix(qtdLinhaColuna, matrizA);
  printf("Matriz B: \n");
  displayMatrix(qtdLinhaColuna, matrizB);
  printf("Matriz C: \n");
  displayMatrix(qtdLinhaColuna, matrizC);

  for (i = 0; i < qtdLinhaColuna; i++) {
    free(matrizA[i]);
    free(matrizB[i]);
    free(matrizC[i]);
  }

  free(matrizA);
  free(matrizB);
  free(matrizC);

  return 0;
}
