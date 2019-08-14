#include <stdio.h>

void sortArray(int arr[], int size) {
  int aux, i, j;

  for (i = 0; i < size; i++) {
    for (j = 0; j < size; j++) {
      if (arr[i] < arr[j]) {
        aux = arr[j];
        arr[j] = arr[i];
        arr[i] = aux;
      }
    }
  }
}

int main() {
  int N, i, current, counter = 0;

  scanf("%d", &N);

  int X[N];

  for (i = 0; i < N; i++) {
    scanf("%d", &X[i]);
  }

  sortArray(X, N);

  current = X[0];
  for (i = 0; i < N; i++) {
    if (current == X[i]) {
      counter++;
    } else {
      printf("%d aparece %d vez(es)\n", current, counter);
      current = X[i];
      counter = 1;
    }
  }

  printf("%d aparece %d vez(es)\n", current, counter);

  return 0;
}
