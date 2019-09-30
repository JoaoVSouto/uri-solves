#include <stdio.h>
#include <stdlib.h>

int lowestArrayValue(int array[], int arraySize, int counter) {
  if (counter == arraySize) {
    return array[counter - 1];
  }

  int nextNumber = lowestArrayValue(array, arraySize, counter + 1);

  return array[counter] < nextNumber ? array[counter] : nextNumber;
}

int main() {
  int *array;
  int arraySize, i;

  printf("Digite o tamanho do array: ");
  scanf("%d", &arraySize);

  array = (int *)calloc(arraySize, sizeof(int));

  for (i = 0; i < arraySize; i++) {
    printf("Digite o %dº elemento do array: ", i + 1);
    scanf("%d", &array[i]);
  }

  printf("O menor elemento do array é: %d\n", lowestArrayValue(array, arraySize, 0));

  free(array);

  return 0;
}
