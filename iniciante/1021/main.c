#include <stdio.h>

int main() {
    int parteinteira, partedecimal, nota100 = 0, nota50 = 0, nota20 = 0, nota10 = 0, nota5 = 0, nota2 = 0;
    int moeda1 = 0, moeda50 = 0, moeda25 = 0, moeda10 = 0, moeda5 = 0, moeda01 = 0;

    scanf("%d.%d", &parteinteira, &partedecimal);

    nota100 = parteinteira / 100;
    parteinteira = (parteinteira % 100);
    nota50 = parteinteira / 50;
    parteinteira = (parteinteira % 50);
    nota20 = parteinteira / 20;
    parteinteira = (parteinteira % 20);
    nota10 = parteinteira / 10;
    parteinteira = (parteinteira % 10);
    nota5 = parteinteira / 5;
    parteinteira = (parteinteira % 5);
    nota2 = parteinteira / 2;
    parteinteira = (parteinteira % 2);

    moeda1 = parteinteira;
    moeda50 = partedecimal / 50;
    partedecimal = (partedecimal % 50);
    moeda25 = partedecimal / 25;
    partedecimal = (partedecimal % 25);
    moeda10 = partedecimal / 10;
    partedecimal = (partedecimal % 10);
    moeda5 = partedecimal / 5;
    partedecimal = (partedecimal % 5);
    moeda01 = partedecimal;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", nota100);
    printf("%d nota(s) de R$ 50.00\n", nota50);
    printf("%d nota(s) de R$ 20.00\n", nota20);
    printf("%d nota(s) de R$ 10.00\n", nota10);
    printf("%d nota(s) de R$ 5.00\n", nota5);
    printf("%d nota(s) de R$ 2.00\n", nota2);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", moeda1);
    printf("%d moeda(s) de R$ 0.50\n", moeda50);
    printf("%d moeda(s) de R$ 0.25\n", moeda25);
    printf("%d moeda(s) de R$ 0.10\n", moeda10);
    printf("%d moeda(s) de R$ 0.05\n", moeda5);
    printf("%d moeda(s) de R$ 0.01\n", moeda01);

    return 0;
}
