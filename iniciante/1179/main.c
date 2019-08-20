#include <stdio.h>

int main() {
  int par[5], impar[5];
  int input, countPar, countImpar, i, j;

  countPar = countImpar = 0;

  for (i = 0; i < 15; i++) {
    scanf("%d", &input);

    if (input % 2 == 0) {
      par[countPar] = input;
      countPar++;
    } else {
      impar[countImpar] = input;
      countImpar++;
    }

    if (countPar == 5) {
      for (j = 0; j < 5; j++) {
        printf("par[%d] = %d\n", j, par[j]);
      }
      countPar = 0;
    }

    if (countImpar == 5) {
      for (j = 0; j < 5; j++) {
        printf("impar[%d] = %d\n", j, impar[j]);
      }
      countImpar = 0;
    }
  }

  for (i = 0; i < countImpar; i++) {
    printf("impar[%d] = %d\n", i, impar[i]);
  }

  for (i = 0; i < countPar; i++) {
    printf("par[%d] = %d\n", i, par[i]);
  }

  return 0;
}
