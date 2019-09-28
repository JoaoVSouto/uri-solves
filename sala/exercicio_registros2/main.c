#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  int codigo;
  char descricao[50];
  float valor;
  int estoque;
} Produto;

typedef struct {
  char nome[50];
  Produto produtos[100];
  int productCounter;
} Loja;

void printStoresBelowAverage(Loja *lojas, int *counter, int maxLojas);
void printStores(Loja *lojas, int *counter);
void insertProduct(Loja *lojas, int *counter);
void insertStore(Loja *lojas, int *counter, int maxLojas);
int printMenu();

int main() {
  Loja *lojas;
  int qtdLojas, entry, counter = 0;

  printf("Digite a quantidade de lojas que deseja registrar: ");
  scanf("%d", &qtdLojas);

  lojas = (Loja *)malloc(qtdLojas * sizeof(Loja));

  while ((entry = printMenu()) != 5) {
    switch (entry) {
      case 1:
        insertStore(lojas, &counter, qtdLojas);
        break;
      case 2:
        insertProduct(lojas, &counter);
        break;
      case 3:
        printStores(lojas, &counter);
        break;
      case 4:
        printStoresBelowAverage(lojas, &counter, qtdLojas);
        break;

      default:
        break;
    }
  }

  free(lojas);

  return 0;
}

void printStoresBelowAverage(Loja *lojas, int *counter, int maxLojas) {
  printf("counter: %d\n", *counter);
  if (!*counter) {
    printf("Registre alguma loja primeiro...\n");
    return;
  }

  char nome[50];
  Loja *lojasFiltradas;
  int lojasFiltradasCounter = 0, qtdProdutoEmlojas = 0;
  int i, j;
  float media, soma = 0;

  lojasFiltradas = (Loja *)malloc(maxLojas * sizeof(Loja));

  printf("Digite o nome do produto: ");
  scanf("%s", nome);

  for (i = 0; i < *counter; i++) {
    int productCounter = lojas[i].productCounter;
    for (j = 0; j < productCounter; j++) {
      if (!strcmp(nome, lojas[i].produtos[j].descricao)) {
        soma += lojas[i].produtos[j].valor;
        qtdProdutoEmlojas += 1;
        break;
      }
    }
  }

  if (!soma) {
    printf("Não foi encontrado nenhum produto com esse nome entre as lojas...\n");
    return;
  }

  media = soma / qtdProdutoEmlojas;

  for (i = 0; i < *counter; i++) {
    int productCounter = lojas[i].productCounter;
    for (j = 0; j < productCounter; j++) {
      if (!strcmp(nome, lojas[i].produtos[j].descricao) &&
          lojas[i].produtos[j].valor <= media &&
          lojas[i].produtos[j].estoque) {
        lojasFiltradas[lojasFiltradasCounter] = lojas[i];
        lojasFiltradasCounter += 1;
        break;
      }
    }
  }

  printStores(lojasFiltradas, &lojasFiltradasCounter);

  free(lojasFiltradas);
}

void printStores(Loja *lojas, int *counter) {
  if (!*counter) {
    printf("Registre alguma loja primeiro...\n");
    return;
  }

  int i, j;

  printf("Loja  /  Cód. Prod.  /  Descrição  /  Valor  /  Estoque\n");
  for (i = 0; i < *counter; i++) {
    if (!lojas[i].productCounter) {
      printf("%s   Essa loja não possui produtos cadastrados...\n", lojas[i].nome);
      continue;
    }

    int productCounter = lojas[i].productCounter;

    printf("%-12s", lojas[i].nome);
    for (j = 0; j < productCounter; j++) {
      if (j != 0) {
        printf("%-12s", " ");
      }
      printf("%-14d", lojas[i].produtos[j].codigo);
      printf("%-12s", lojas[i].produtos[j].descricao);
      printf("%-12.2f", lojas[i].produtos[j].valor);
      printf("%d\n", lojas[i].produtos[j].estoque);
    }
  }
}

void insertProduct(Loja *lojas, int *counter) {
  int i, index = -1;
  char nome[50];

  printf("Digite o nome da loja que deseja inserir o produto: ");
  scanf("%s", nome);

  for (i = 0; i < *counter; i++) {
    if (!strcmp(lojas[i].nome, nome)) {
      index = i;
    }
  }

  if (index == -1) {
    printf("Não encontramos nenhuma loja com esse nome...\n");
    return;
  }

  int *productCounter = &lojas[index].productCounter;

  printf("Digite o código do produto: ");
  scanf("%d", &lojas[index].produtos[*productCounter].codigo);

  printf("Digite a descrição do produto: ");
  scanf("%s", lojas[index].produtos[*productCounter].descricao);

  printf("Digite o valor do produto: ");
  scanf("%f", &lojas[index].produtos[*productCounter].valor);

  printf("Digite a quantidade em estoque do produto: ");
  scanf("%d", &lojas[index].produtos[*productCounter].estoque);

  *productCounter += 1;
}

void insertStore(Loja *lojas, int *counter, int maxLojas) {
  if (*counter >= maxLojas) {
    printf("A quantidade máxima de lojas já foi atingida!\n");
    return;
  }

  printf("Digite o nome da loja: ");
  scanf("%s", lojas[*counter].nome);

  lojas[*counter].productCounter = 0;

  *counter += 1;
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
