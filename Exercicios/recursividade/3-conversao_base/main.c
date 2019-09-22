#include <stdio.h>

int binario(int numero) {
    if (numero > 0) {
        binario(numero / 2);
        return printf("%d", numero % 2);
    }
}

int main() {
    int n;
    printf("Digite um numero decimal a fim de ser convertido em binario\n");
    scanf("%d", &n);
    binario(n);
    printf("\n");
    return 0;
}
