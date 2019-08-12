#include <stdio.h>

int main() {
    float I = 0, J = 1;
    ;
    int aux = 0, aux2 = 5;
    while (I < 2.2 && J != 6) {
        if (aux2 % 5 == 0) {
            printf("I=%.0f J=%.0f\n", I, J);
        } else {
            printf("I=%.1f J=%.1f\n", I, J);
        }

        J++;
        aux++;
        if (aux == 3) {
            I = I + 0.2;
            aux = 0;
            aux2 = aux2 + 1;
            J = 1;
            J = J + I;
        }
    }

    return 0;
}