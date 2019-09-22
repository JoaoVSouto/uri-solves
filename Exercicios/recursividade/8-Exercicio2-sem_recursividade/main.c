#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    float array[n], soma = 0;
    for (i = 0; i < n; i++) {
        scanf("%f", &array[i]);
    }
    for (i = 0; i < n; i++) {
        soma += array[i];
    }

    printf("soma: %.1f", soma);

    return 0;
}
