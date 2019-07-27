#include <stdio.h>

int main() {
  int arraySize, i, smallest, position = 0;

  scanf("%d", &arraySize);

  int numberArr[arraySize];

  for (i = 0; i < arraySize; i++) {
    scanf("%d", &numberArr[i]);
  }

  smallest = numberArr[0];

  for (i = 0; i < arraySize; i++) {
    if (numberArr[i] < smallest) {
      position = i;
      smallest = numberArr[i];
    }
  }

  printf("Menor valor: %d\n", smallest);
  printf("Posicao: %d\n", position);

  return 0;
}
