#include <stdio.h>

int fact(int number) {
  if (number == 1 || number == 0) return 1;

  return number * fact(number - 1);
}

int main() {
  int number;

  printf("Digite o número que queira realizar o fatorial: ");
  scanf("%d", &number);

  printf("O fatorial de %d é %d\n", number, fact(number));

  return 0;
}
