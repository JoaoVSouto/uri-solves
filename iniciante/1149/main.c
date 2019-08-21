#include <stdio.h>

int main() {
    int A, N, i, soma = 0;
    scanf("%d %d", &A, &N);
    if (N <= 0) {
        do {
            scanf("%d", &N);
        } while (N <= 0);
    }
    for (i = 0; i < N; i++) {
        soma += A + i;
    }
    printf("%d\n", soma);

    return 0;
}