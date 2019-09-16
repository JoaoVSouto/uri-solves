#include <stdio.h>

int count(int number, int desired, int desiredFixed) {
  if (number > 0) {
    int resto = number % 10;

    if (resto == desiredFixed) {
      desired += 1;
    }

    count(number / 10, desired, desiredFixed);
  }
}

int main() {
  int N, K;

  scanf("%d %d", &N, &K);

  printf("count: %d\n", count(N, K, K));

  printf("%d\n", count(N, K, K) - K);

  return 0;
}
