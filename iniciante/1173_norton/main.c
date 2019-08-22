#include <stdio.h>
int main() {
    int N[10], i, valor;
    scanf("%d", &valor);
    for (i = 0; i < 10; i++) {
        N[i] = valor;
        printf("N[%d] = %d\n", i, valor);
        valor *= 2;
    }

    return 0;
}