#include <stdio.h>

int main() {
    int n, i, j = 0, soma = 0, k = 1, aux;
    scanf("%d", &n);
    for (i = 1; i < n; i++) {
        printf("%d ", soma);
        soma = j + k;
        aux = j;
        j = soma;
        k = aux;
    }
    printf("%d\n", soma);

    return 0;
}