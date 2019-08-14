#include <stdio.h>

int main() {
    int i, par = 0, numero;

    for (i = 0; i < 5; i++) {
        scanf("%d", &numero);
        if (numero % 2 == 0) {
            par = par + 1;
        }
    }
    printf("%d valores pares\n", par);
    return 0;
}