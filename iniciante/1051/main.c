#include <stdio.h>

int main() {
  float wage, remaining, tax;
  short free = 0;

  scanf("%f", &wage);

  if (wage <= 2000) {
    free = 1;
  } else if (wage > 2000 && wage <= 3000) {
    remaining = wage - 2000;

    tax = remaining * 8 / 100;
  } else if (wage > 3000 && wage <= 4500) {
    remaining = wage - 3000;

    tax = remaining * 18 / 100;

    tax += 1000 * 8 / 100;
  } else {
    remaining = wage - 4500;

    tax = remaining * 28 / 100;

    tax += 1500 * 18 / 100;

    tax += 1000 * 8 / 100;
  }

  free ? printf("Isento\n") : printf("R$ %.2f\n", tax);

  return 0;
}
