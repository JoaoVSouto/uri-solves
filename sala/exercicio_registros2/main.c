#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int codigo;
  char descricao[50];
  float valor;
  int estoque;
} Produto;

typedef struct {
  char nome[50];
  Produto produtos[100];
} Loja;

void insertStore();
int printMenu();

int main() {
  Loja *lojas;
  int qtdLojas, entry, counter = 0;

  printf("Digite a quantidade de lojas que deseja registrar: ");
  scanf("%d", &qtdLojas);

  lojas = (Loja *)calloc(qtdLojas, sizeof(Loja));

  while ((entry = printMenu()) != 5) {
    switch (entry) {
      case 1:

        break;

      default:
        break;
    }
  }

  return 0;
}

int printMenu() {
  int entry;

  printf("┌──────────────────────────────────────────────────────────────────────────┐\n");
  printf("│ O que deseja realizar?                                                   │\n");
  printf("│ 1. Inserir uma nova loja                                                 │\n");
  printf("│ 2. Inserir um novo produto em uma loja                                   │\n");
  printf("│ 3. Imprimir todas as lojas e seus respectivos produtos                   │\n");
  printf("│ 4. Listar lojas que tem determinado produto com o valor abaixo da média  │\n");
  printf("│ 5. Sair                                                                  │\n");
  printf("└──────────────────────────────────────────────────────────────────────────┘\n");
  scanf("%d", &entry);

  return entry;
}
