#include <stdio.h>

int main() {
    int i, positivo = 0;
    float numero, soma;

    for (i = 0; i < 6; i++) {
        scanf("%f", &numero);
        if (numero > 0) {
            positivo = positivo + 1;
            soma = soma + numero;
        }
    }
    printf("%d valores positivos\n", positivo);
    printf("%.1f\n", soma / positivo);

    return 0;
}
