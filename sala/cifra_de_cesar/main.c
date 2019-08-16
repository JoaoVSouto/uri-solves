#include <stdio.h>

#define KEY 3

int main(int argc, char const* argv[]) {
  int N, i, diff;

  printf("Digite a quantidade de letras da palavra: \n");
  scanf("%d", &N);

  N += 1;  // acrescenta o \n

  char string[N];

  for (i = 0; i < N; i++) {
    scanf("%c", &string[i]);
  }

  for (i = 0; i < N; i++) {
    if (string[i] >= 'x') {
      diff = 122 - string[i];
      string[i] = 96 + (KEY - diff);
    } else {
      string[i] = string[i] + KEY;
    }
  }

  printf("%s\n", string);

  return 0;
}
