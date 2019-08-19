#include <stdio.h>

typedef unsigned long long int ull;

ull fib(ull entry) {
  if (entry == 0) return 0;
  if (entry == 1) return 1;

  ull i, last = 1, beforeLast = 0, current;

  for (i = 0; i < entry - 1; i++) {
    current = last + beforeLast;
    beforeLast = last;
    last = current;
  }

  return current;
}

int main() {
  short testCases, i;
  ull entry;

  scanf("%hd", &testCases);

  for (i = 0; i < testCases; i++) {
    scanf("%llu", &entry);
    printf("Fib(%llu) = %llu\n", entry, fib(entry));
  }

  return 0;
}
