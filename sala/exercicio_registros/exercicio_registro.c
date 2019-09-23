#include <stdio.h>
#include <string.h>

#define SIZE 10

typedef struct dataNasc {
  int dia;
  int mes;
  int ano;
} DataNasc;

typedef struct pessoa {
  char nome[50];
  float altura;
  DataNasc dataDeNascimento;
} Pessoa;

void listInfosByDate(Pessoa array[], int *counter);
void listInfos(Pessoa array[], int *counter);
void insertInfo(Pessoa array[], int *counter);
void printRow(Pessoa pessoa);
int printMenu();

int main() {
  Pessoa pessoas[SIZE];
  int entry, counter = 0;

  while ((entry = printMenu()) != 4) {
    switch (entry) {
      case 1:
        insertInfo(pessoas, &counter);
        break;
      case 2:
        listInfos(pessoas, &counter);
        break;
      case 3:
        listInfosByDate(pessoas, &counter);
        break;

      default:
        break;
    }
  }

  return 0;
}

void listInfosByDate(Pessoa array[], int *counter) {
  if (*counter == 0) {
    printf("Nada para mostrar... Tente adicionar novos usuários!\n");
    return;
  }

  int dia, mes, ano, i;

  printf("Digite o dia, mês e ano: \n");
  scanf("%d %d %d", &dia, &mes, &ano);

  printf("\nNome   /   Altura   /   Data de Nascimento\n");
  for (i = 0; i < *counter; i++) {
    if (array[i].dataDeNascimento.ano > ano ||
        array[i].dataDeNascimento.ano == ano && array[i].dataDeNascimento.mes > mes ||
        array[i].dataDeNascimento.ano == ano && array[i].dataDeNascimento.mes == mes &&
            array[i].dataDeNascimento.dia > dia) {
      continue;
    }

    printRow(array[i]);
  }
  printf("\n");
}

void listInfos(Pessoa array[], int *counter) {
  if (*counter == 0) {
    printf("Nada para mostrar... Tente adicionar novos usuários!\n");
    return;
  }

  int i;

  printf("\nNome   /   Altura   /   Data de Nascimento\n");
  for (i = 0; i < *counter; i++) {
    printRow(array[i]);
  }
  printf("\n");
}

void insertInfo(Pessoa array[], int *counter) {
  if (*counter >= SIZE) {
    printf("Opa! As %d pessoas já foram preenchidas!\n", SIZE);
    return;
  }

  char nome[50];
  float altura;
  int dia, mes, ano;

  printf("Digite o nome da pessoa:\n");
  scanf("%s", nome);

  printf("Digite a altura da pessoa:\n");
  scanf("%f", &altura);

  printf("Digite o dia de nascimento da pessoa:\n");
  scanf("%d", &dia);

  printf("Digite o mês de nascimento da pessoa:\n");
  scanf("%d", &mes);

  printf("Digite o ano de nascimento da pessoa:\n");
  scanf("%d", &ano);

  strcpy(array[*counter].nome, nome);
  array[*counter].altura = altura;
  array[*counter].dataDeNascimento.dia = dia;
  array[*counter].dataDeNascimento.mes = mes;
  array[*counter].dataDeNascimento.ano = ano;

  *counter += 1;
}

void printRow(Pessoa pessoa) {
  printf("%-12s%-12.2f%d/%d/%d\n", pessoa.nome,
         pessoa.altura,
         pessoa.dataDeNascimento.dia,
         pessoa.dataDeNascimento.mes,
         pessoa.dataDeNascimento.ano);
}

int printMenu() {
  int entry;

  printf("┌─────────────────────────────────────────────────────────────────┐\n");
  printf("│ O que deseja realizar?                                          │\n");
  printf("│ 1. Inserir dados                                                │\n");
  printf("│ 2. Listar todas as informações dos usuários                     │\n");
  printf("│ 3. Listar informações dos usuários que nasceram até certa data  │\n");
  printf("│ 4. Sair                                                         │\n");
  printf("└─────────────────────────────────────────────────────────────────┘\n");
  scanf("%d", &entry);

  return entry;
}
