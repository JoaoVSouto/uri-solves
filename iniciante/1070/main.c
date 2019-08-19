#include <stdio.h>

int main() {
  int x, contador = 0;
  scanf("%d", &x);
  for (x; contador < 6; x++) {
    if (x % 2 != 0) {
      printf("%d\n", x);
      contador = contador + 1;
    }
  }

  return 0;
}
