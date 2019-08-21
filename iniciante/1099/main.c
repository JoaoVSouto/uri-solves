#include <stdio.h>

int main() {
  int n, x, y, i = 0, contador_impar = 0, aux, aux2;
  scanf("%d", &n);
  while (i < n) {
    scanf("%d %d", &x, &y);
    aux = x;
    aux2 = y;
    if (x > y) {
      for (y; y < x;) {
        if (y % 2 != 0 && aux2 != y) {
          contador_impar += y;
        }
        y++;
      }
      printf("%d\n", contador_impar);
    } else if (y > x) {
      for (x; x < y;) {
        if (x % 2 != 0 && aux != x) {
          contador_impar += x;
        }
        x++;
      }
      printf("%d\n", contador_impar);
    } else {
      printf("%d\n", contador_impar);
    }

    i++;
    contador_impar = 0;
  }

  return 0;
}