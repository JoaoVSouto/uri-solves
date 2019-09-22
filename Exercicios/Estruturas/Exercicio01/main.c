#include <stdio.h>
#define MAX_PESSOAS 11

typedef struct data_nascimento {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct pessoa {
    char nome[50];
    float altura;
    struct data_nascimento data;
} Pessoa;

Pessoa pessoas[MAX_PESSOAS];

int main() {
    scanf("%s", &pessoas[0].nome);
    pessoas[0].altura = 1.7;
    pessoas[0].data.dia = 2;
    pessoas[0].data.mes = 12;
    pessoas[0].data.ano = 2000;
    scanf("%s", &pessoas[1].nome);
    pessoas[1].altura = 1.4;
    pessoas[1].data.dia = 18;
    pessoas[1].data.mes = 4;
    pessoas[1].data.ano = 2008;
    int i;
    for (i = 0; i < MAX_PESSOAS; i++) {
        if (pessoas[i].altura != 0) {
            printf("Nome: %s\n", pessoas[i].nome);
            printf("Altura: %.1f\n", pessoas[i].altura);
            printf("dia: %d\n", pessoas[i].data.dia);
            printf("mes: %d\n", pessoas[i].data.mes);
            printf("ano: %d\n", pessoas[i].data.ano);
        }
    }

    return 0;
}
