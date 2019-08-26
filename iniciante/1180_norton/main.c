#include <stdio.h>
int bubblesort(int tamanho, int lista[]) {
    int i = 0, k, aux;
    for (i = 0; i < (tamanho - 1); i++) {
        for (k = (i + 1); k < tamanho; k++) {
            if (lista[i] > lista[k]) {
                aux = lista[i];
                lista[i] = lista[k];
                lista[k] = aux;
            }
        }
    }
    return (lista[tamanho]);
}

int main() {
    int N, i = 0;
    scanf("%d", &N);
    int X[N], aux[N];
    for (i = 0; i < N; i++) {
        scanf("%d", &X[i]);
    }

    for (i = 0; i < N; i++) {
        aux[i] = X[i];
    }

    bubblesort(N, X);
    printf("Menor valor: %d\n", X[0]);
    for (i = 0; i < N; i++) {
        if (X[0] == aux[i]) {
            printf("Posicao: %d\n", i);
        }
    }

    return 0;
}
