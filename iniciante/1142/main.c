#include <stdio.h>

int main() {
    int N, contador = 0, i = 1;
    scanf("%d", &N);
    while (contador < N) {
        printf("%d %d %d PUM\n", (i), (i + 1), (i + 2));
        contador++;
        i = i + 4;
    }

    return 0;
}
