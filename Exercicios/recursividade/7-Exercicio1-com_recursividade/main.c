#include <stdio.h>

int verifica(int num, int dig, int *cont) {
    // printf("num : %d\n", num % 10);
    if (num + 1 / 10 > 0) {
        if (num % 10 == dig) {
            // printf("Entrou\n");
            *cont = 1 + *cont;
            // printf("cont : %d\n", *cont);
        }
        return verifica(num / 10, dig, cont);
    }
}

int main() {
    int numero, digito, contador = 0, aux;
    scanf("%d", &numero);
    scanf("%d", &digito);
    aux = numero;
    verifica(numero, digito, &contador);
    printf("O digito %d ocorre %d vezes no numero %d", digito, contador, aux);

    return 0;
}
