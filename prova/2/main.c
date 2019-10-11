#include <stdio.h>
#include <stdlib.h>

int main() {
    float **matrizA, **matrizB;
    int tam_A_li, tam_A_col, tam_B_li, tam_B_col, i, j, k, l, contador = 0;
    printf("Digite a quantidade de linhas da matrizA\n");
    scanf("%d", &tam_A_li);
    printf("Digite a quantidade de colunas da matrizA\n");
    scanf("%d", &tam_A_col);
    matrizA = (float **)calloc(tam_A_li, sizeof(float *));
    if (matrizA == NULL) {
        return 1;
    }
    for (i = 0; i < tam_A_li; i++) {
        matrizA[i] = (float *)calloc(tam_A_col, sizeof(float));
        if (matrizA[i] == NULL) {
            return 1;
        }
    }

    printf("Digite a quantidade de linhas da matrizB\n");
    scanf("%d", &tam_B_li);
    printf("Digite a quantidade de colunas da matrizB\n");
    scanf("%d", &tam_B_col);
    matrizB = (float **)calloc(tam_B_li, sizeof(float *));
    if (matrizB == NULL) {
        return 1;
    }
    for (i = 0; i < tam_B_li; i++) {
        matrizB[i] = (float *)calloc(tam_B_col, sizeof(float));
        if (matrizB[i] == NULL) {
            return 1;
        }
    }
    printf("Digite os %d valores da matriz A\n", (tam_A_li * tam_A_col));
    for (i = 0; i < tam_A_li; i++) {
        for (j = 0; j < tam_A_col; j++) {
            scanf("%f", &matrizA[i][j]);
        }
    }
    printf("Digite os %d valores da matriz B\n", (tam_B_li * tam_B_col));
    for (i = 0; i < tam_B_li; i++) {
        for (j = 0; j < tam_B_col; j++) {
            scanf("%f", &matrizB[i][j]);
        }
    }
    int comper;
    if (tam_A_li != tam_B_li && tam_A_col != tam_B_col) {
    } else {
        for (i = 0; i < tam_A_li; i++) {
            for (j = 0; j < tam_A_col; j++) {
                comper = matrizA[i][j];
                for (k = 0; k < tam_B_li; k++) {
                    for (l = 0; l < tam_B_col; l++) {
                        if (comper == matrizB[k][l]) {
                            contador++;
                        }
                        matrizB[k][l] = (float)'x';
                    }
                }
            }
        }
    }
    if (contador == (tam_A_li * tam_A_col)) {
        printf("Sao iguais!\n");
    } else {
        printf("Sao diferentes!\n");
    }

    return 0;
}