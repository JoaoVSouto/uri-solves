#include <stdio.h>

int main() {
    int n, contador = 0;
    float n1, n2, n3;
    scanf("%d", &n);
    while (contador < n) {
        scanf("%f %f %f", &n1, &n2, &n3);
        printf("%.1f\n", (((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10));
        contador++;
    }

    return 0;
}