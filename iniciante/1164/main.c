#include <stdio.h>

int main() {
    int vezes, numero, i, sum_divisivel = 0, j;
    scanf("%d", &vezes);
    for (i = 0; i < vezes; i++) {
        sum_divisivel = 0;
        scanf("%d", &numero);
        for (j = 1; j < numero; j++) {
            if (numero % j == 0) {
                //printf("J: %d\n", j);
                sum_divisivel = j + sum_divisivel;
            }
        }
        //printf("soma: %d\n", sum_divisivel);
        if (sum_divisivel == numero) {
            printf("%d eh perfeito\n", numero);
        } else {
            printf("%d nao eh perfeito\n", numero);
        }
    }

    return 0;
}
