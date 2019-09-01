#include <stdio.h>

int fibRecursive(int a) {
  if (!a) return 0;
  if (a == 1 || a == 2) return 1;

  return fibRecursive(a - 1) + fibRecursive(a - 2);
}

long long int fibProcedural(int a) {
  if (!a) return 0;
  if (a == 1 || a == 2) return 1;

  long long int previous = 1, beforePrevious = 1, number;
  short i;

  for (i = 3; i <= a; i++) {
    number = previous + beforePrevious;
    beforePrevious = previous;
    previous = number;
  }

  return number;
}

int main() {
  long long int N[50];
  short i;

  for (i = 0; i < 50; i++) {
    N[i] = fibProcedural(i);
  }

  printf("Fib(%d) = %llu\n", 33, N[33]);

  return 0;
}
