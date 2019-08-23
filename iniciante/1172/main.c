#include <stdio.h>

int main() {
  int X[10], i, verifica;
  for (i = 0; i < 10; i++) {
    scanf("%d", &verifica);
    if (verifica > 0) {
      X[i] = verifica;
    } else {
      X[i] = 1;
    }
  }

  for (i = 0; i < 10; i++) {
    printf("X[%d] = %d\n", i, X[i]);
  }
  return 0;
}
