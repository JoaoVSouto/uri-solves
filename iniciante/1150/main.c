#include <stdio.h>
int main() {
    int x, z, i = 0, resultado = 0;
    scanf("%d", &x);
    scanf("%d", &z);
    if (x >= z) {
        while (x >= z) {
            scanf("%d", &z);
        }

        for (x, resultado; resultado < z; x++, i++) {
            resultado = x + resultado;
        }
    }
    printf("%d\n", i);

    return 0;
}
