#include <stdio.h>
int main() {
    int codigo, quantidade, i;
    float valor, total = 0;
    for (i = 0; i < 2; i++) {
        scanf("%d %d %f", &codigo, &quantidade, &valor);
        total = total + (quantidade * valor);
    }
    printf("VALOR A PAGAR: R$ %.2f\n", total);
    return 0;
}
//cmd: gcc -o calcsimples calcsimples.c && .\calcsimples
//commit
