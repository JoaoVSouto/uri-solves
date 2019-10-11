#include <stdio.h>

int tetranacci(int numero) {
  if (numero == 0 || numero == 1 || numero == 2)
    return 0;
  if (numero == 3 || numero == 4)
    return 1;
  return tetranacci(numero - 1) + tetranacci(numero - 2) + tetranacci(numero - 3) + tetranacci(numero - 4);
}

int main() {
  int n;
  scanf("%d", &n);
  printf("O numero de tetranacci correspondente a posicao %d eh %d\n", n, tetranacci(n));
  return 0;
}
