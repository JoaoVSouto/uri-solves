#include <stdio.h>

int main() {
    int X, Y, i, aux, aux2;
    scanf("%d", &X);
    scanf("%d", &Y);
    aux = X;
    aux2 = Y;
    if (Y <= X) {
        Y = X;
        X = aux2;
    }
    for (X = X + 1; X < Y; X++) {
        if (X % 5 == 2 || X % 5 == 3) {
            printf("%d\n", X);
        }
    }

    return 0;
}