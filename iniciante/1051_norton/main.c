#include <stdio.h>

int main() {
    float salario, total_devido = 0, aux, aux2, aux3;
    scanf("%f", &salario);
    if (salario >= 0 && salario <= 2000) {
        printf("Isento\n");
        return 0;
    } else if (salario >= 2000.01 && salario <= 3000) {
        salario = salario - 2000;
        total_devido = salario * 0.08;
    } else if (salario >= 3000.01 && salario <= 4500) {
        aux = salario - 3000;
        total_devido = total_devido + (aux * 0.18);
        aux2 = (salario - aux) - 2000;
        total_devido = total_devido + (aux2 * 0.08);

    } else if (salario > 4500) {
        aux = salario - 4500;
        total_devido = total_devido + (aux * 0.28);
        aux2 = (salario - aux) - 3000;
        total_devido = total_devido + (aux2 * 0.18);
        aux3 = (salario - aux - aux2) - 2000;
        total_devido = total_devido + (aux3 * 0.08);
    }

    printf("R$ %.2f\n", total_devido);
    return 0;
}