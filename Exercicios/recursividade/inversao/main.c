#include <math.h>
#include <stdio.h>

int reverse(int number, int digits, int divider, int cumuler, int counter) {
  if (counter > digits) {
    return cumuler;
  }

  int x = number % divider;
  int y = (number % (divider * 10)) - x;
  int z = y / divider;

  cumuler = cumuler + z * pow(10, counter - 1);

  reverse(number, digits, divider / 10, cumuler, counter + 1);
}

int main() {
  int number, cloneNumber, digits = 0;

  printf("Type a number: ");
  scanf("%d", &number);

  cloneNumber = number;

  while (cloneNumber != 0) {
    cloneNumber /= 10;
    digits += 1;
  }

  printf("Reversed: %d\n", reverse(number, digits, pow(10, digits - 1), 0, 1));

  return 0;
}
