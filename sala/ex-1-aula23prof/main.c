#include <stdio.h>

int countDigit(int N, int K) {
  if (N == 0) {
    return 0;
  }

  return countDigit(N / 10, K) + (N % 10 == K);
}

int main() {
  int N, K;

  scanf("%d %d", &N, &K);

  printf("The number %d appears %d times\n", K, countDigit(N, K));

  return 0;
}
