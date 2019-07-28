#include <stdio.h>

int main() {
    int idade, dia = 0, mes = 0, ano = 0;
    scanf("%d", &idade);
    if (idade >= 365) {
        ano = idade / 365;
    }

    if (idade < 365 && idade >= 30) {
        mes = (idade % 365) / 30;
    }

    if (idade < 30) {
        dia = (idade % 30);
    }

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);

    return 0;
}

//gcc -o main main.c && .\main