#include <stdio.h>

float validateNumber();
int checkIfContinues();

int main() {
  float n1, n2, avg;
  int run;

  do {
    n1 = validateNumber();
    n2 = validateNumber();
    avg = (n1 + n2) / 2;
    printf("media = %.2f\n", avg);
  } while ((run = checkIfContinues()) == 1);

  return 0;
}

float validateNumber() {
  float number;

  scanf("%f", &number);

  while (number < 0 || number > 10) {
    printf("nota invalida\n");
    scanf("%f", &number);
  }

  return number;
}

int checkIfContinues() {
  int run;

  do {
    printf("novo calculo (1-sim 2-nao)\n");
    scanf("%d", &run);
  } while (run != 1 && run != 2);

  return run;
}
