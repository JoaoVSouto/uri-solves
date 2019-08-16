#include <stdio.h>

int main(int argc, char const* argv[]) {
  int N, i, diff;

  printf("Digite a quantidade de letras da palavra: \n");
  scanf("%d", &N);

  char string[N + 1];

  for (i = 0; i < N + 1; i++) {
    scanf("%c", &string[i]);
  }

  for (i = 0; i < N + 1; i++) {
    if (string[i] >= 'x') {
      diff = 122 - string[i];
      string[i] = 96 + (3 - diff);
    } else {
      string[i] = string[i] + 3;
    }
  }

  printf("%s\n", string);

  return 0;
}
