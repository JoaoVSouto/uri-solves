#include <stdio.h>
int bubblesort(int tamanho, int lista[]) {
  int i = 0, k, aux, contador = 0;
  for (i = 0; i < (tamanho - 1); i++) {
    for (k = (i + 1); k < tamanho; k++) {
      if (lista[i] > lista[k]) {
        aux = lista[i];
        lista[i] = lista[k];
        lista[k] = aux;
        contador++;
      }
    }
  }
  return (contador);
}

int main() {
  int N, i = 0, L, j, contador;
  scanf("%d", &N);
  while (i < N) {
    scanf("%d", &L);
    int S[L];
    for (j = 0; j < L; j++) {
      scanf("%d", &S[j]);
    }
    contador = bubblesort(L, S);
    i++;
    printf("Optimal train swapping takes %d swaps.\n", contador);
  }
}

//gcc main.c -o main && ./main
