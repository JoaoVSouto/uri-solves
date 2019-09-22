#include <stdio.h>

int fatorial(int numero) {
    if (numero == 0 || numero == 1)
        return 1;
    else {
        printf("Operação atual %d * %d\n", numero, numero - 1);
        return numero * fatorial(numero - 1);
    }
}

int main() {
    int n, x;
    scanf("%d", &n);
    printf("Fatorial de %d eh %d\n", n, fatorial(n));
    return 0;
}
