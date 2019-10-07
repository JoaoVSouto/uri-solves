#include <stdio.h>
#include <string.h>

#define FRASE_SIZE 101

int main() {
  char frase[FRASE_SIZE];
  char palavra[FRASE_SIZE];
  int i, j, occur = 0, equals = 1;

  printf("Digite uma frase:\n");
  fgets(frase, FRASE_SIZE, stdin);

  printf("Digite uma palavra para checar na frase: ");
  fgets(palavra, FRASE_SIZE, stdin);

  for (i = 0; i < strlen(frase) - 1; i += 1) {
    equals = 1;
    if (frase[i] == palavra[0]) {
      for (j = 1; j < strlen(palavra) - 1; j++) {
        if (frase[i + j] != palavra[j]) equals = 0;
      }
      if (equals) occur += 1;
    }
  }

  printf("A palavra %s aparece %d vez(es)\n", palavra, occur);

  return 0;
}
