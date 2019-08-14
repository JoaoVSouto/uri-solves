#include <stdio.h>

int main() {
    int n, contador, a = 0, b = 0, c = 0;
    scanf("%d", &n);
    n = n * 2;
    for (contador = 0; contador < n; contador++) {
        if (contador % 2 != 0) {
            c = 1 + c;
            b = 1 + b;
            printf("%d %d %d\n", a, b, c);
        } else if (contador % 2 == 0) {
            a = a + 1;
            b = a * a;
            c = a * a * a;
            printf("%d %d %d\n", a, b, c);
        }
    }

    return 0;
}