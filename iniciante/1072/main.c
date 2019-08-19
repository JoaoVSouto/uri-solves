#include <stdio.h>

int main() {
  int n, contador = 0, numero;
  int in = 0, out = 0;
  scanf("%d", &n);
  while (contador < n) {
    scanf("%d", &numero);
    if (numero >= 10 && numero <= 20) {
      in++;
    } else {
      out++;
    }

    contador++;
  }
  printf("%d in\n", in);
  printf("%d out\n", out);

  return 0;
}