#include <stdio.h>

void fibonacci(int N) {
    int i;
    long long int j = 0, soma = 0, k = 1, aux;
    for (i = 1; i < N; i++) {
        soma = j + k;
        aux = j;
        j = soma;
        k = aux;
    }
    if (N < 1) {
        printf("Fib(%d) = %lld\n", N, (j));
    } else {
        printf("Fib(%d) = %lld\n", N, (soma + k));
    }
}

int main() {
    int T, i = 0, N;
    scanf("%d", &T);
    while (i < T) {
        scanf("%d", &N);
        fibonacci(N);
        i++;
    }

    return 0;
}
