#include <stdio.h>
#include <stdlib.h>

float media(float **matriz, int line, int size_collum) {
    int j, soma = 0;
    float media_;
    for (j = 0; j < size_collum; j++) {
        soma += matriz[line][j];
    }
    media_ = (float)(soma) / (float)(size_collum);
    return media_;
}

void displayMatrix(float **matriz, int size_line, int size_collum) {
    int i, j;
    for (i = 0; i < size_line; i++) {
        printf("Aluno %d: ", i + 1);
        for (j = 0; j < (size_collum + 1); j++) {
            if (j < size_collum) {
                printf("N%d ", j + 1);
            } else {
                printf("Media: ");
            }

            printf("%.1f   ", matriz[i][j]);
        }

        printf("\n");
        printf("\n");
    }
}

int main() {
    int i, j, qtd_alunos, qtd_notas;
    float **matriz;
    printf("Digite a quantidade de alunos (linhas)\n");
    scanf("%d", &qtd_alunos);
    printf("Digite a quantidade de notas (colunas)\n");
    scanf("%d", &qtd_notas);

    matriz = (float **)calloc(qtd_alunos, sizeof(float *));

    if (matriz == NULL) {
        return 1;
    }

    for (i = 0; i < qtd_alunos; i++) {
        matriz[i] = (float *)calloc((qtd_notas + 1), sizeof(float *));
        if (matriz == NULL) {
            return 1;
        }
    }

    for (i = 0; i < qtd_alunos; i++) {
        for (j = 0; j < qtd_notas; j++) {
            scanf("%f", &matriz[i][j]);
        }
        printf("J antes:%d\n", j);
        matriz[i][j] = media(matriz, i, qtd_notas);
    }

    displayMatrix(matriz, qtd_alunos, qtd_notas);

    for (i = 0; i < qtd_alunos; i++) {
        free(matriz[i]);
    }

    free(matriz);

    return 0;
}
