#include <stdio.h>

#define SIZE 10

int sumArray(int arr[], int size) {
  int sum = 0, i;

  for (i = 0; i < size; i++) {
    sum += arr[i];
  }

  return sum;
}

int main() {
  int N[SIZE];
  int pares[SIZE] = {0}, impares[SIZE] = {0};
  int countPares = 0, countImpares = 0;
  int i;

  for (i = 0; i < SIZE; i++) {
    scanf("%d", &N[i]);
    if (N[i] % 2 == 0) {
      pares[countPares++] = N[i];
    } else {
      impares[countImpares++] = N[i];
    }
  }

  printf("Soma do vetor de pares: %d\n", sumArray(pares, SIZE));
  printf("Soma do vetor de ímpares: %d\n", sumArray(impares, SIZE));

  return 0;
}
