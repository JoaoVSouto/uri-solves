#include <stdio.h>

int sortArray(short arr[], short size) {
  short i, j, aux, counter = 0;

  for (i = 1; i < size; i++) {
    for (j = 0; j < size - i; j++) {
      if (arr[j] > arr[j + 1]) {
        aux = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = aux;
        counter++;
      }
    }
  }
  return counter;
}

int main() {
  short testCases, i, j, trainSize;

  scanf("%hd", &testCases);

  for (i = 0; i < testCases; i++) {
    scanf("%hd", &trainSize);

    short wagons[trainSize];

    for (j = 0; j < trainSize; j++) {
      scanf("%hd", &wagons[j]);
    }

    printf("Optimal train swapping takes %hd swaps.\n", sortArray(wagons, trainSize));
  }

  return 0;
}
