#include <stdio.h>
#include <stdlib.h>

int main() {
  int tam, i;
  int *vetor;

  printf("Digite o tamanho do array: ");
  scanf("%d", &tam);

  vetor = (int *)malloc(sizeof(int) * tam);

  for (i = 0; i < tam; i++) {
    scanf("%d", &vetor[i]);
  }

  for (i = 0; i < tam; i++) {
    printf("%d ", vetor[i]);
  }

  printf("\n");

  free(vetor);

  return 0;
}
