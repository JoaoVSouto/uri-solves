#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STRING_SIZE 50

int main() {
  char secretWord[STRING_SIZE];
  char userWord[STRING_SIZE] = {0};
  int i, tries = 0, found = 0;
  char currentChar;

  printf("Digite uma palavra a ser descoberta: ");
  fgets(secretWord, STRING_SIZE, stdin);

  system("clear");

  for (i = 0; i < strlen(secretWord) - 1; i++) {
    userWord[i] = '*';
  }

  while (tries != 5) {
    printf("Palavra: %s\n", userWord);
    printf("Tentativas: %d de 5\n", 5 - tries);

    printf("Digite uma letra: ");
    currentChar = getchar();
    getchar();

    for (i = 0; i < strlen(secretWord); i++) {
      if (secretWord[i] == currentChar) {
        userWord[i] = secretWord[i];
        found = 1;
      }
    }

    char *pch;
    pch = strchr(userWord, '*');

    if (pch == NULL) {
      break;
    }

    if (!found) {
      tries += 1;
    }

    found = 0;
  }

  if (tries == 5) {
    printf("Que pena você perdeu ;(\n");
  } else {
    printf("Hey você ganhou!!\n");
  }

  return 0;
}
