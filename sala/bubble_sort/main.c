#include <stdio.h>

#define SIZE 10

void bubbleSort(int array[]) {
  int i, j, aux;

  for (i = 1; i < SIZE; i++) {
    for (j = 0; j < SIZE - i; j++) {
      if (array[j] > array[j + 1]) {
        aux = array[j];
        array[j] = array[j + 1];
        array[j + 1] = aux;
      }
    }
  }
}

int main() {
  int array[SIZE], i;

  for (i = 0; i < SIZE; i++) {
    scanf("%d", &array[i]);
  }

  bubbleSort(array);

  for (i = 0; i < SIZE; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");

  return 0;
}
