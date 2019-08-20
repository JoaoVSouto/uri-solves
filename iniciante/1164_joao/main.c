#include <stdio.h>

typedef enum { false,
               true } bool;

bool isPerfect(int number) {
  int cumuler = 0, i;

  for (i = 1; i < number; i++) {
    if (number % i == 0) {
      cumuler += i;
    }
  }

  if (cumuler == number) return true;
  return false;
}

int main() {
  short testCases, i;
  int number;

  scanf("%hd", &testCases);

  for (i = 0; i < testCases; i++) {
    scanf("%d", &number);

    if (isPerfect(number) == true) {
      printf("%d eh perfeito\n", number);
    } else {
      printf("%d nao eh perfeito\n", number);
    }
  }

  return 0;
}
