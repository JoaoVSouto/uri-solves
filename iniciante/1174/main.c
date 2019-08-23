#include <stdio.h>
#define TAMANHO 100
int main() {
  float A[TAMANHO], verifica;
  int i;
  for (i = 0; i < TAMANHO; i++) {
    scanf("%f", &A[i]);
  }
  for (i = 0; i < TAMANHO; i++) {
    verifica = A[i];
    if (verifica <= 10) {
      printf("A[%d] = %.1f\n", i, verifica);
    }
  }

  return 0;
}
