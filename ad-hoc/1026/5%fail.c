#include <math.h>
#include <stdio.h>

#define BITS 32

void decimalToBinary(int arr[], unsigned long int number) {
  unsigned long int quotient, remainder, countArr = BITS - 1, i;

  do {
    quotient = number / 2;
    remainder = number % 2;
    number = quotient;
    arr[countArr] = remainder;
    countArr--;
  } while (quotient != 0);
}

unsigned long int binaryToDecimal(int arr[]) {
  unsigned long int sum = 0;
  int i;

  for (i = BITS - 1; i >= 0; i--) {
    if (arr[i] == 1) {
      sum += pow(2, (BITS - 1) - i);
    }
  }

  return sum;
}

int main() {
  unsigned long int n1, n2;
  int i, c;
  int binary1[BITS] = {0};
  int binary2[BITS] = {0};
  int binaryResultant[BITS] = {0};

  while (c != EOF) {
    scanf("%lu %lu", &n1, &n2);
    c = getchar();

    decimalToBinary(binary1, n1);
    decimalToBinary(binary2, n2);

    // makes the sum between the two numbers without a carry bit
    for (i = BITS - 1; i >= 0; i--) {
      binaryResultant[i] = ((binary1[i] - binary2[i]) == 0) ? 0 : 1;
    }

    printf("%ld\n", binaryToDecimal(binaryResultant));
  }

  return 0;
}