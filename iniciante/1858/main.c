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
    int N, i = 0, j = 0;
    scanf("%d", &N);
    int T[N], T2[N];
    for (j = 0; j < N; j++) {
        scanf("%d", &T[j]);
    }
    for (i = 0; i < N; i++) {
        T2[i] = T[i];
    }
    bubblesort(N, T);
    for (i = 0; i < N; i++) {
        if (T[0] == T2[i]) {
            printf("%d\n", i + 1);
            break;
        }
    }

    return 0;
}
