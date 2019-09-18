#include <stdio.h>
#include <stdlib.h>

void reverseArray(int arraySize, int arrayCount, int array[]) {
  int stopCondition = arraySize - arraySize / 2;

  if (arrayCount <= stopCondition) {
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

  for (i = 0; i < arraySize; i++) {
    scanf("%d", &array[i]);
  }

  reverseArray(arraySize, arrayCount, array);

  for (i = 0; i < arraySize; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");

  free(array);

  return 0;
}
