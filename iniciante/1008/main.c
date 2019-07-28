#include <stdio.h>

int main() {
    int numero, horas;
    float valor;
    scanf("%d", &numero);
    scanf("%d", &horas);
    scanf("%f", &valor);
    printf("NUMBER = %d\n", numero);
    printf("SALARY = U$ %.2f\n", valor * horas);

    return 0;
}
//cmd: gcc -o salario salario.c && .\salario
//powershell: gcc -o salario salario.c ; .\salario