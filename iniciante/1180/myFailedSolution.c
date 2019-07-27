#include <stdio.h>
#include <stdlib.h>

#define SIZE_ARRAY 200

typedef enum { false,
               true } bool;

void flushstdin() {
  char c;
  while ((c = getchar()) != '\n' && c != EOF)
    ;
}

int main() {
  int arraySize;
  int numberArr[arraySize], countNumberArr = 0;
  int finalArr[arraySize], countFinalArr = 0, position = 0, smallestValue;
  int cloneArr[arraySize];
  int sum = 0;
  int i, j;

  // char* ptr;

  bool minus = false;

  int returnValue = scanf("%d", &arraySize);
  flushstdin();

  char entry[SIZE_ARRAY];

  // ptr = (char* ) malloc(arraySize * sizeof(char));

  char* returnValue2 = fgets(entry, SIZE_ARRAY, stdin);

  // faz o mapeamento da string pra array de numeros
  // i.e. "321 -4 7 21" -> [321, -4, 7, 21]
  for (i = 0; entry[i] != '\0'; i++) {
    if ((entry[i] >= '0') && (entry[i] <= '9')) {
      numberArr[countNumberArr] = entry[i] - '0';  // converte char pra int i.e. '3' -> 3
      countNumberArr++;
    } else if (entry[i] == '-') {
      minus = true;
    } else {
      // concatena os números de um array e joga pra dentro do finalArr
      // i.e [1, 2, 3] -> 123
      for (j = 0; j < countNumberArr; j++) {
        int x = countNumberArr - j, count = 1;
        while (x != 1) {
          x--;
          count *= 10;
        }
        sum += numberArr[j] * count;
      }
      finalArr[countFinalArr] = (minus == true) ? sum * -1 : sum;
      cloneArr[countFinalArr] = finalArr[countFinalArr];
      minus = false;
      // printf("%d - %d\n", finalArr[countFinalArr], countFinalArr);
      countFinalArr++;
      sum = 0;
      countNumberArr = 0;
    }
  }

  for (i = 0; i < arraySize; i++) {
    printf("cloneArr[%d] = %d\n", i, cloneArr[i]);
  }

  smallestValue = cloneArr[0];

  for (i = 0; i < arraySize; i++) {
    if (cloneArr[i] < smallestValue) {
      position = i;
      smallestValue = cloneArr[i];
    }
  }

  printf("Menor valor: %d\n", smallestValue);
  printf("Posicao: %d\n", position);

  return 0;
}
