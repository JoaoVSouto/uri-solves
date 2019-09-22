#include <stdio.h>

int main() {
    int numero, digito, contador = 0, aux;
    scanf("%d", &numero);
    scanf("%d", &digito);
    aux = numero;

    while ((numero + 1 / 10) > 0) {
        printf("numero:%d\n", numero);
        if (numero % 10 == digito) {
            contador++;
        }
        numero = numero / 10;
    }
    printf("O digito %d ocorre %d vezes no numero %d", digito, contador, aux);

    return 0;
}
