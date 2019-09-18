#include <stdio.h>
#include <stdlib.h>

void printArray(int arraySize, int array[]) {
  int i;

  for (i = 0; i < arraySize; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

void reverseArray(int arraySize, int arrayCount, int array[]) {
  if (arrayCount <= arraySize / 2) {
    return;
  }

  int aux = array[arrayCount - 1];
  array[arrayCount - 1] = array[arraySize - arrayCount];
  array[arraySize - arrayCount] = aux;

  arrayCount -= 1;

  reverseArray(arraySize, arrayCount, array);
}

int main() {
  int* array;
  int arraySize, arrayCount, i;

  printf("Type the size of the array: ");
  scanf("%d", &arraySize);

  arrayCount = arraySize;

  array = (int*)calloc(arraySize, sizeof(int));

  printf("Type the elements of the array: ");
  for (i = 0; i < arraySize; i++) {
    scanf("%d", &array[i]);
  }

  reverseArray(arraySize, arrayCount, array);

  printf("Array reversed: ");
  printArray(array, arraySize);

  free(array);

  return 0;
}
