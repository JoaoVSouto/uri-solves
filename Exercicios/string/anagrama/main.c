#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define STRING_SIZE 50

int main() {
  char string[STRING_SIZE];
  char anagramaString[STRING_SIZE];
  int i, j, asterisks = 1;

  printf("Digite uma palavra qualquer: ");
  fgets(string, STRING_SIZE, stdin);

  printf("Digite uma palavra como seu possível anagrama: ");
  fgets(anagramaString, STRING_SIZE, stdin);

  for (i = 0; i < strlen(string) - 1; i++) {
    char currentWord = string[i];
    for (j = 0; j < strlen(anagramaString) - 1; j++) {
      if (toupper(anagramaString[j]) == toupper(currentWord)) {
        anagramaString[j] = '*';
        break;
      }
    }
  }

  for (i = 0; i < strlen(anagramaString) - 1; i++) {
    if (anagramaString[i] != '*') {
      asterisks = 0;
    }
  }

  if (!asterisks) {
    printf("As palavras não são anagramas!\n");
  } else {
    printf("As palavras são anagramas!\n");
  }

  return 0;
}
