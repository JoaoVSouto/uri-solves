#include <stdio.h>

int count(int number, int desired, int desiredFixed) {
  if (number > 0) {
    int resto = number % 10;

    if (resto == desiredFixed) {
      desired += 1;
    }

    count(number / 10, desired, desiredFixed);
  } else {
    return desired;
  }
}

int main() {
  int N, K;

  scanf("%d %d", &N, &K);

  printf("The number %d appears %d times\n", K, count(N, K, K) - K);

  return 0;
}
