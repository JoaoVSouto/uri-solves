#include <stdio.h>

#define SIZE_CHAR 7

typedef enum { win,
               lost,
               tie } gameState;

void flushStdin() {
  int c;
  while ((c = getchar()) != '\n' && c != EOF)
    ;
}

gameState checkIfWin(char sheldon, char raj) {
  gameState sheldonWins = lost;
  if ((sheldon == 'd' && (raj == 's' || raj == 'g')) ||
      (sheldon == 'p' && (raj == 'd' || raj == 'o')) ||
      (sheldon == 's' && (raj == 'g' || raj == 'p')) ||
      (sheldon == 'g' && (raj == 'p' || raj == 'o')) ||
      (sheldon == 'o' && (raj == 's' || raj == 'd'))) {
    sheldonWins = win;
  }

  if (sheldon == raj) sheldonWins = tie;
  return sheldonWins;
}

int main() {
  int numberOfTests, i;
  char entry1[SIZE_CHAR], entry2[SIZE_CHAR];
  gameState sheldonWins;

  scanf("%d", &numberOfTests);
  flushStdin();

  for (i = 0; i < numberOfTests; i++) {
    scanf("%s %s", entry1, entry2);
    sheldonWins = checkIfWin(entry1[2], entry2[2]);
    printf("Caso #%d: ", i + 1);
    if (sheldonWins == win)
      printf("Bazinga!\n");
    else if (sheldonWins == lost)
      printf("Raj trapaceou!\n");
    else
      printf("De novo!\n");
  }

  return 0;
}
