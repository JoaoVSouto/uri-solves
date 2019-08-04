#include <stdio.h>

int main() {
    float salario, reajuste, novo_salario, percentual;
    scanf("%f", &salario);
    if (salario >= 0 && salario <= 400) {
        novo_salario = salario * 1.15;
        reajuste = novo_salario - salario;
    } else if (salario >= 400.01 && salario <= 800) {
        novo_salario = salario * 1.12;
        reajuste = novo_salario - salario;
    } else if (salario >= 800.01 && salario <= 1200) {
        novo_salario = salario * 1.10;
        reajuste = novo_salario - salario;
    } else if (salario >= 1200.01 && salario <= 2000) {
        novo_salario = salario * 1.07;
        reajuste = novo_salario - salario;
    } else if (salario > 2000) {
        novo_salario = salario * 1.04;
        reajuste = novo_salario - salario;
    }
    percentual = ((novo_salario / salario) - 1) * 100;
    printf("Novo salario: %.2f\n", novo_salario);
    printf("Reajuste ganho: %.2f\n", reajuste);
    printf("Em percentual: %.0f %%\n", percentual);
    return 0;
}