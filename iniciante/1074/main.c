#include <stdio.h>

int main() {
  int n, contador = 0, numero;

  scanf("%d", &n);
  while (contador < n) {
    scanf("%d", &numero);
    if (numero > 0) {
      if (numero % 2 == 0) {
        printf("EVEN POSITIVE\n");
      } else {
        printf("ODD POSITIVE\n");
      }

    } else if (numero < 0) {
      if (numero % 2 == 0) {
        printf("EVEN NEGATIVE\n");
      } else {
        printf("ODD NEGATIVE\n");
      }
    } else {
      printf("NULL\n");
    }

    contador++;
  }

  return 0;
}