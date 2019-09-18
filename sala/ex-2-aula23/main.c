#include <stdio.h>
#include <stdlib.h>

float sumArray(int arraySize, float* array) {
  if (arraySize == 0) {
    return 0;
  }

  return sumArray(arraySize - 1, array) + array[arraySize - 1];
}

int main() {
  float* array;
  int arraySize, i;

  printf("Type the size of the array: ");
  scanf("%d", &arraySize);

  array = (float*)calloc(arraySize, sizeof(float));

  for (i = 0; i < arraySize; i++) {
    scanf("%f", &array[i]);
  }

  printf("The sum of the array is %.2f\n", sumArray(arraySize, array));

  return 0;
}
