#include <stdio.h>

typedef enum { true,
               false } bool;

bool checkIfExists(int arr[], int size, int number) {
  int i;
  bool exists = false;

  for (i = 0; i < size; i++) {
    if (arr[i] == number) {
      exists = true;
    }
  }

  return exists;
}

int main() {
  return 0;
}
