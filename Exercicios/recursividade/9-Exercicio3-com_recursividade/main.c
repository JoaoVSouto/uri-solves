#include <stdio.h>

int ordem(int tam, int vetor[tam]) {
    if (tam >= 0) {
        ordem(tam - 1, vetor);
        return printf("%d", vetor[tam - 1]);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int array[n], i;
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    ordem(n, array);
    return 0;
}
