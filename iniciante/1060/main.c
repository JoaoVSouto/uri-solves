#include <stdio.h>

int main() {
    int i, positivo = 0;
    float numero;

    for (i = 0; i < 6; i++) {
        scanf("%f", &numero);
        if (numero > 0) {
            positivo = positivo + 1;
        }
    }
    printf("%d valores positivos\n", positivo);

    return 0;
}
