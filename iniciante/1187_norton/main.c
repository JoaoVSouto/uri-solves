#include <stdio.h>
#define POS 12

int main() {
    double soma = 0.0, M[POS][POS];
    int i, j, contador = 0;
    char operacao;
    scanf(" %c", &operacao);
    for (i = 0; i < POS; i++) {
        for (j = 0; j < POS; j++) {
            scanf("%lf", &M[i][j]);
            if (j + i <= 10 && j > i) {
                soma += M[i][j];
                contador++;
            }
        }
    }

    switch (operacao) {
        case 'S':
            printf("%.1lf\n", soma);
            break;
        case 'M':
            printf("%.1lf\n", (soma / contador));
            break;
    }

    return 0;
}
