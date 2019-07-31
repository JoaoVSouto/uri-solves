#include <stdio.h>

int main() {
  int codigo, quantidade, i;
  float preco[5] = {4.00, 4.50, 5.00, 2.00, 1.50}, total = 0.00;
  scanf("%d %d", &codigo, &quantidade);
  for (i = 0; i <= codigo; i++) {
    if (i == codigo) {
      total = preco[i - 1] * quantidade;
    }
  }
  printf("Total: R$ %.2f\n", total);

  return 0;
}
