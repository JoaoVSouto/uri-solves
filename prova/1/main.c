#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DISC 6

typedef struct disciplina {
    char codigo[8];
    float nota1, nota2, nota3;
    int frequencia;
} Disciplina;

typedef struct aluno {
    int matricula;
    char nome[31];
    Disciplina disciplinas[MAX_DISC];
    int qtdDisciplinas;
} Aluno;

void leAlunoDeTeclado(Aluno *a, int qtdAlunos);
void insereAluno(Aluno *alunos, int *qtdAlunos, Aluno *a);
void listaAlunos(Aluno *alunos, int qtdAlunos, char *codigo);
void buscaAluno(Aluno *alunos, int qtdAlunos, char *nome);
void listaAprovados(Aluno *alunos, int qtdAlunos, char *codigo);
void listaReprovados(Aluno *alunos, int qtdAlunos, char *codigo);

int main() {
    Aluno *alunos;
    Aluno a;
    int op, qtdAlunos = 0, tam_Al, qtdProd = 0, qtd_disciplinas = 0;
    char codigo[8], nome[31];

    printf("Entre com o numero maximo de alunos.\n");
    scanf("%d", &tam_Al);
    alunos = (Aluno *)malloc(tam_Al * sizeof(Aluno));

    do {
        printf("1. Insere novo aluno\n");
        printf("2. Listar a matricula e o nome de cada aluno seguido de suas notas e frequencia para uma dada disciplina\n");
        printf("3. Buscar um aluno por QUALQUER UM dos seus nomes ou sobrenomes e listar todas as disciplinas em que ele esta matriculado\n");
        printf("4. Exibir todos os alunos aprovados em uma dada disciplina\n");
        printf("5. Exibir todos os alunos reprovados em uma dada disciplina\n");
        printf("6. Sair\n");
        scanf("%d", &op);
        switch (op) {
            case 1:
                if (qtdAlunos < tam_Al) {
                    leAlunoDeTeclado(&a, qtdAlunos);
                    insereAluno(alunos, &qtdAlunos, &a);
                } else {
                    printf("O numero de alunos alcancou o maximo!\n");
                }

                break;
            case 2:
                getchar();
                printf("Entre com um codigo.\n");
                scanf("%s", codigo);
                listaAlunos(alunos, qtdAlunos, codigo);
                printf("op: %d\n", op);
                break;
            case 3:
                getchar();
                printf("Digite um nome/sobrenome.\n");
                scanf("%s", nome);
                buscaAluno(alunos, qtdAlunos, nome);
                break;
            case 4:
                getchar();
                printf("Entre com um codigo.\n");
                scanf("%s", codigo);
                listaAprovados(alunos, qtdAlunos, codigo);
                break;

            case 5:
                getchar();
                printf("Entre com um codigo.\n");
                scanf("%s", codigo);
                listaReprovados(alunos, qtdAlunos, codigo);
                break;
            case 6:
                break;

            default:
                printf("Valor inválido.\n");
                break;
        }

    } while (op != 6);

    return 0;
}
void leAlunoDeTeclado(Aluno *a, int qtdAlunos) {
    int verifica = 1;
    a[qtdAlunos].qtdDisciplinas = 0;
    int *disciplinaCont = &a[qtdAlunos].qtdDisciplinas;
    printf("Entre com a matricula do aluno:\n");
    scanf("%d", &a->matricula);
    printf("Entre com o nome do aluno:\n");
    getchar();
    fgets(a->nome, 31, stdin);
    do {
        if (*disciplinaCont < MAX_DISC) {
            printf("Digite o codigo da disciplina\n");
            scanf("%s", a->disciplinas[*disciplinaCont].codigo);
            printf("Digite as notas da disciplina\n");
            scanf("%f", &a->disciplinas[*disciplinaCont].nota1);
            scanf("%f", &a->disciplinas[*disciplinaCont].nota2);
            scanf("%f", &a->disciplinas[*disciplinaCont].nota3);
            printf("Digite a frequencia da disciplina\n");
            scanf("%d", &a->disciplinas[*disciplinaCont].frequencia);
            *disciplinaCont += 1;
            printf("Digite 0 para parar de adicionar disciplinas\nrestam : %d espacos\n", ((MAX_DISC) - (*disciplinaCont)));
            scanf("%d", &verifica);

        } else {
            printf("Numero maximo de disciplinas alcancado\n");
            break;
        }

    } while (verifica != 0);
}
void insereAluno(Aluno *alunos, int *qtdAlunos, Aluno *a) {
    alunos[*qtdAlunos] = *a;
    (*qtdAlunos)++;
}

void listaAlunos(Aluno *alunos, int qtdAlunos, char *codigo) {
    int i, j, verific = 0;

    for (i = 0; i < qtdAlunos; i++) {
        for (j = 0; j < alunos[i].qtdDisciplinas; j++) {
            if (strcmp(codigo, alunos[i].disciplinas[j].codigo) == 0) {
                printf("\nMatricula: %d\n", alunos[i].matricula);
                printf("Nome : %s", alunos[i].nome);
                printf("\tCodigo: %s\n", alunos[i].disciplinas[j].codigo);
                printf("\tNota 1: %.1f\n", alunos[i].disciplinas[j].nota1);
                printf("\tNota 2: %.1f\n", alunos[i].disciplinas[j].nota2);
                printf("\tNota 3: %.1f\n", alunos[i].disciplinas[j].nota3);
                printf("\tFrequencia: %d\n", alunos[i].disciplinas[j].frequencia);
                verific = 1;
            }
        }
    }
    if (verific != 1) {
        printf("Nao ha nenhum aluno com esse codigo de disciplina!\n");
    }
    verific = 0;
    getchar();
    getchar();
}

void buscaAluno(Aluno *alunos, int qtdAlunos, char *nome) {
    char *frase_atual;
    int i, j;
    for (i = 0; i < qtdAlunos; i++) {
        frase_atual = strstr(alunos[i].nome, nome);
        if (frase_atual != NULL) {
            printf("Nome : %s", alunos[i].nome);
            for (j = 0; j < alunos[i].qtdDisciplinas; j++) {
                printf("\tCodigo: %s\n", alunos[i].disciplinas[j].codigo);
                printf("\tNota 1: %.1f\n", alunos[i].disciplinas[j].nota1);
                printf("\tNota 2: %.1f\n", alunos[i].disciplinas[j].nota2);
                printf("\tNota 3: %.1f\n", alunos[i].disciplinas[j].nota3);
                printf("\tFrequencia: %d\n", alunos[i].disciplinas[j].frequencia);
                printf("\n");
            }
        } else {
            printf("Nao foi encontrado aluno algum.\n");
        }
    }
}

void listaAprovados(Aluno *alunos, int qtdAlunos, char *codigo) {
    int i, j, verifica = 0;
    float media, soma;
    printf("Lista de aprovados:\n");
    for (i = 0; i < qtdAlunos; i++) {
        for (j = 0; j < alunos[i].qtdDisciplinas; j++) {
            if (strcmp(codigo, alunos[i].disciplinas[j].codigo) == 0) {
                soma = alunos[i].disciplinas[j].nota1 + alunos[i].disciplinas[j].nota2 + alunos[i].disciplinas[j].nota3;
                media = (float)soma / (float)3;
                if (media >= 6 && alunos[i].disciplinas[j].frequencia >= 75) {
                    printf("Nome: %s", alunos[i].nome);
                    printf("\tMedia:%.1f\n", media);
                    printf("\tFrequencia:%d\n", alunos[i].disciplinas[j].frequencia);
                    verifica = 1;
                }
            }
        }
    }
    if (verifica != 1) {
        printf("Nenhum aluno aprovado nessa disciplina!\n");
    }
    verifica = 0;
    getchar();
}

void listaReprovados(Aluno *alunos, int qtdAlunos, char *codigo) {
    int i, j, verifica = 0;
    float media, soma;
    printf("Lista de reprovados:\n");
    for (i = 0; i < qtdAlunos; i++) {
        for (j = 0; j < alunos[i].qtdDisciplinas; j++) {
            if (strcmp(codigo, alunos[i].disciplinas[j].codigo) == 0) {
                soma = alunos[i].disciplinas[j].nota1 + alunos[i].disciplinas[j].nota2 + alunos[i].disciplinas[j].nota3;
                media = (float)soma / (float)3;
                if (media < 6 || alunos[i].disciplinas[j].frequencia < 75) {
                    printf("Nome: %s", alunos[i].nome);
                    printf("\tMedia:%.1f\n", media);
                    printf("\tFrequencia:%d\n", alunos[i].disciplinas[j].frequencia);
                    verifica = 1;
                }
            }
        }
    }
    if (verifica != 1) {
        printf("Nenhum aluno reprovado nessa disciplina!\n");
    }
    verifica = 0;
    getchar();
}