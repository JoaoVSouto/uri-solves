#include <stdio.h>

int main() {
  int n, contador = 0;
  scanf("%d", &n);
  while (contador < 10000) {
    if (contador % n == 2) {
      printf("%d\n", contador);
    }
    contador++;
  }

  return 0;
}