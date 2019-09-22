#include <stdio.h>

int fibonacci(int numero) {
    if (numero == 0)
        return 0;
    if (numero == 1 || numero == 2)
        return 1;
    if (numero == 3) return 2;
    return fibonacci(numero - 1) + fibonacci(numero - 2) + fibonacci(numero - 3) + fibonacci(numero - 4);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("O numero de tetranacci correspondente a posicao %d eh %d", n, fibonacci(n));
    return 0;
}
