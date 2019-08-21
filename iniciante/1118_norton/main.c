#include <stdio.h>

void verifica();
void calculo();

typedef enum {
    false,
    true
} bool;

void calculo() {
    int i = 0;
    float nota, soma = 0;
    while (i < 2) {
        scanf("%f", &nota);
        if (nota >= 0 && nota <= 10) {
            soma += nota;
            i += 1;
        } else {
            printf("nota invalida\n");
        }
    }
    printf("media = %.2f\n", (soma / 2));
    verifica();
}

void verifica() {
    int novo_calculo = 0;
    while (true) {
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &novo_calculo);
        if (novo_calculo == 1 || novo_calculo == 2) {
            break;
        }
    }
    if (novo_calculo == 1) {
        calculo();
    }
}

int main() {
    calculo();
    return 0;
}
