#include <stdio.h>

int main() {
  int numero, i;
  char* meses[12] = {"January", "February", "March", "April", "May", "June",
                     "July", "August", "September", "October", "November", "December"};
  scanf("%d", &numero);
  for (i = 0; i <= numero; i++) {
    if (i == numero) {
      printf("%s\n", meses[i - 1]);
    }
  }

  return 0;
}

//gcc -o main main.c ; .\main
//gcc main.c -o main && ./main