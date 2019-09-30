#include <stdio.h>
#include <string.h>

void palindrome(int strLen, int counter, char* string, char* stringRev) {
  if (counter == strLen - 1) {
    stringRev[strLen - 1 - counter] = string[counter];
    return;
  }

  palindrome(strLen, counter + 1, string, stringRev);

  stringRev[strLen - 1 - counter] = string[counter];
}

int main() {
  char string[30];
  char stringRev[30];
  int i;

  printf("Digite uma palavra: ");
  scanf("%s", string);

  for (i = 0; string[i] != '\0'; i++)
    ;

  palindrome(i, 0, string, stringRev);

  if (!strcmp(string, stringRev)) {
    printf("São palíndromos!\n");
  } else {
    printf("Não são palíndromos!\n");
  }

  return 0;
}
