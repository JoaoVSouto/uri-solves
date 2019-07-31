#include <stdio.h>
int main() {
    int x = 1, i, soma;
    while (x != 0) {
        soma = 0;
        scanf("%d", &x);
        if (x == 0) {
            break;
        }
        if (x % 2 == 0) {
            x = x;
        } else {
            x = x + 1;
        }
        for (i = 0; i < 5; i++) {
            soma = x + soma;
            x = x + 2;
        }
        printf("%d\n", soma);
    }

    return 0;
}
