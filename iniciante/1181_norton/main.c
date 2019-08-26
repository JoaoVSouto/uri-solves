#include <stdio.h>
#define POS 12

int main() {
    float soma = 0.0, M[POS][POS];
    int i, j, linha;
    char operacao;
    scanf("%d", &linha);
    scanf(" %c", &operacao);
    for (i = 0; i < POS; i++) {
        for (j = 0; j < POS; j++) {
            scanf("%f", &M[i][j]);
            if (linha == i) {
                soma += M[i][j];
            }
        }
    }
    switch (operacao) {
        case 'S':
            printf("%.1f\n", soma);
            break;
        case 'M':
            printf("%.1f\n", (soma / POS));
            break;
    }

    return 0;
}

//gcc main.c -o main ; ./main
