#include <stdio.h>

int main() {
    int i = 0;
    float nota, soma = 0;
    while (i < 2) {
        scanf("%f", &nota);
        if (nota >= 0 && nota <= 10) {
            soma += nota;
            i++;
        } else {
            printf("nota invalida\n");
        }
    }
    printf("media = %.2f\n", soma / 2);

    return 0;
}