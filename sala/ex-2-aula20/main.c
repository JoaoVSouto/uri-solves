#include <stdio.h>
#include <stdlib.h>

int *uniao(int *x1, int *x2, int n1, int n2, int *qtd) {
  int *vetor;
  int i, totalSize = n1 + n2;

  vetor = (int *)calloc(totalSize, sizeof(int));

  for (i = 0; i < n1; i++) {
    vetor[i] = x1[i];
  }

  for (i = 0; i < n2; i++) {
    vetor[i + n1] = x2[i];
  }

  *qtd = totalSize;

  return vetor;
}

int main() {
  int *x1, sizeX1;
  int *x2, sizeX2;
  int qtd, i;

  printf("enter the size of x1: ");
  scanf("%d", &sizeX1);

  x1 = (int *)calloc(sizeX1, sizeof(int));

  printf("enter the content of x1:\n");
  for (i = 0; i < sizeX1; i++) {
    scanf("%d", &x1[i]);
  }

  printf("enter the size of x2: ");
  scanf("%d", &sizeX2);

  x2 = (int *)calloc(sizeX2, sizeof(int));

  printf("enter the content of x2:\n");
  for (i = 0; i < sizeX2; i++) {
    scanf("%d", &x2[i]);
  }

  int *x3 = uniao(x1, x2, sizeX1, sizeX2, &qtd);

  printf("\n----------------------\n");
  printf("total size of the final array: %d\n", qtd);

  for (i = 0; i < qtd; i++) {
    printf("#%d: %d\n", i, x3[i]);
  }

  free(x1);
  free(x2);
  free(x3);

  return 0;
}
