#include <stdio.h>

int main() {
  int testCases, i, mariaCounter, joaoCounter, currentPlay;

  while (1) {
    mariaCounter = joaoCounter = 0;

    scanf("%d", &testCases);

    if (!testCases) break;

    for (i = 0; i < testCases; i++) {
      scanf("%d", &currentPlay);
      currentPlay ? joaoCounter++ : mariaCounter++;
    }

    printf("Mary won %d times and John won %d times\n", mariaCounter, joaoCounter);
  }

  return 0;
}
