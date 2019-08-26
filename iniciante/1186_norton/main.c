#include <stdio.h>
#define POS 12

int main() {
    float soma = 0.0, M[POS][POS];
    int i, j, contador = 0;
    char operacao;
    scanf(" %c", &operacao);
    for (i = 0; i < POS; i++) {
        for (j = 0; j < POS; j++) {
            scanf("%f", &M[i][j]);
            if (((i + j) >= 12)) {
                soma += M[i][j];
                contador++;
            }
        }
    }

    switch (operacao) {
        case 'S':
            printf("%.1f\n", soma);
            break;
        case 'M':
            printf("%.1f\n", (soma / contador));
            break;
    }

    return 0;
}
