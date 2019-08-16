#include <stdio.h>

#define N 10000

int main(int argc, char const *argv[]) {
  char c[1001], current;
  int i, j = 0, up = 0, end = 0, appear = 0;

  for (i = 0; i < N; i++) {
    scanf("%s", c);

    current = c[j];
    while (current != '\0') {
      if (current == EOF) {
        end = 1;
        break;
      }
      if (up == -1) break;
      if (current == '(') {
        up++;
        appear++;
      }
      if (current == ')') {
        up--;
        appear++;
      }
      j++;
      current = c[j];
    }

    if (end) break;

    for (j = 0; j < 1001; j++) {
      c[j] = ' ';
    }

    if (!appear) continue;

    j = appear = 0;

    if (up == 0) {
      printf("correct\n");
    } else {
      printf("incorrect\n");
    }

    up = 0;
  }

  return 0;
}
