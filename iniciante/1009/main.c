#include <stdio.h>

int main() {
    char nome[20];
    double salario, montante;
    scanf("%s", &nome);
    scanf("%lf", &salario);
    scanf("%lf", &montante);
    montante = montante * 0.15;
    printf("TOTAL = R$ %.2lf\n", salario + montante);

    return 0;
}
//cmd: gcc -o salariob salariob.c && .\salariob
//powershell: gcc -o salariobonus salariobonus.c ; .\salariobonus