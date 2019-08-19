#include <stdio.h>

typedef unsigned long int uli;

uli fib(uli entry) {
  if (entry == 0) {
    return 0;
  }
  if (entry == 1) {
    return 1;
  }
  return fib(entry - 1) + fib(entry - 2);
}

int main() {
  short testCases, i;
  uli entry;

  scanf("%hd", &testCases);

  for (i = 0; i < testCases; i++) {
    scanf("%lu", &entry);
    printf("Fib(%lu) = %lu\n", entry, fib(entry));
  }

  return 0;
}
