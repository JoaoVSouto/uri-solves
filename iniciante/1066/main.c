#include <stdio.h>

int main() {
    int i, par = 0, impar = 0, positivo = 0, negativo = 0, numero;

    for (i = 0; i < 5; i++) {
        scanf("%d", &numero);
        if (numero % 2 == 0) {
            par = par + 1;
        } else {
            impar = impar + 1;
        }
        if (numero > 0) {
            positivo = positivo + 1;
        }
        if (numero < 0) {
            negativo = negativo + 1;
        }
    }
    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", positivo);
    printf("%d valor(es) negativo(s)\n", negativo);
    return 0;
}