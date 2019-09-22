#include <stdio.h>

int fibonacci(int numero) {
    if (!numero)
        return 0;
    if (numero == 1 || numero == 2)
        return 1;
    return fibonacci(numero - 1) + fibonacci(numero - 2);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("O numero de fibonacci correspondente a posicao %d eh %d", n, fibonacci(n));
    return 0;
}
