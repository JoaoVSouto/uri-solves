#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_PESSOAS 10
int op;

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

void lista_nome_altura();
void inserir_nome();
void antes_data();

int main() {
    do {
        system("cls");  // windows
        //system("clear"); //linux
        printf("-----MENU-----\n");
        printf("Digite 1 para inserir uma pessoa.\n");
        printf("Digite 2 para listar todas as pessoas (nome e altura).\n");
        printf("Digite 3 para listar os nomes das pessoas que nasceram antes de uma certa data fornecida.\n");
        printf("Digite 4 para sair.\n");
        printf("--------------\n");
        scanf("%d", &op);
        system("cls");  // windows
        //system("clear"); //linux
        switch (op) {
            case 1:
                inserir_nome();
                break;
            case 2:
                lista_nome_altura();
                break;
            case 3:
                antes_data();
                break;
            case 4:
                system("exit");
                break;

            default:
                printf("Valor invalido :/\n");

                break;
        }
    } while (op != 4);

    return 0;
}

void inserir_nome() {
    static int i = 0;
    do {
        if (i >= MAX_PESSOAS) {
            printf("Limite de pessoas alcancado. :/\n");
            printf("Aperte enter para voltar ao menu !\n");
            getchar();
            getchar();
            op = 0;
        } else {
            printf("Digite o nome\n");
            scanf("%s", &pessoas[i].nome);

            printf("Digite a altura\n");
            scanf("%f", &pessoas[i].altura);

            printf("Digite o  dia de nascimento\n");
            scanf("%d", &pessoas[i].data.dia);

            printf("Digite o  mes de nascimento\n");
            scanf("%d", &pessoas[i].data.mes);

            printf("Digite o  ano de nascimento\n");
            scanf("%d", &pessoas[i].data.ano);

            printf("Digite 1, caso queira adicionar mais nomes, ou 0 para sair.\n");
            scanf("%d", &op);
            i++;
        }

    } while (op != 0);
}

void lista_nome_altura() {
    int i;
    for (i = 0; i < MAX_PESSOAS; i++) {
        if (pessoas[i].altura != 0) {
            printf("Nome: %s\n", pessoas[i].nome);
            printf("Altura: %.1f\n", pessoas[i].altura);
        }
    }
    printf("Aperte enter para voltar ao menu!\n");
    getchar();
    getchar();
}

void antes_data() {
    int i, escolhaDia, escolhaMes, escolhaAno, verifica = 0;
    do {
        printf("Digite um dia.\n");
        scanf("%d", &escolhaDia);
        printf("Digite um mes.\n");
        scanf("%d", &escolhaMes);
        printf("Digite um ano.\n");
        scanf("%d", &escolhaAno);

        for (i = 0; i < MAX_PESSOAS; i++) {
            if (pessoas[i].altura != 0) {
                if (pessoas[i].data.ano < escolhaAno) {
                    printf("Nome: %s\n", pessoas[i].nome);
                    printf("Altura: %.1f\n", pessoas[i].altura);
                    verifica = 1;
                } else if (pessoas[i].data.ano == escolhaAno) {
                    if (pessoas[i].data.mes < escolhaMes) {
                        printf("Nome: %s\n", pessoas[i].nome);
                        printf("Altura: %.1f\n", pessoas[i].altura);
                        verifica = 1;
                    } else if (pessoas[i].data.mes == escolhaMes) {
                        if (pessoas[i].data.dia < escolhaDia) {
                            printf("Nome: %s\n", pessoas[i].nome);
                            printf("Altura: %.1f\n", pessoas[i].altura);
                            verifica = 1;
                        }
                    }
                }
            }
        }
        if (verifica != 1) {
            printf("Nada foi encontrado. :(\n");
        }
        verifica = 0;

        printf("Digite 1, caso queira pesquisar mais pessoas, ou 0 para voltar ao menu\n");
        scanf("%d", &op);
    } while (op != 0);
}