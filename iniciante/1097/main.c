#include <stdio.h>

int main() {
    int I = 1, J = 7, aux;
    aux = J;
    while (I != 11 && J != 16) {
        if (I % 2 != 0) {
            printf("I=%d J=%d\n", I, J);
        }
        J--;
        if (J == (aux - 2)) {
            if (I % 2 != 0) {
                printf("I=%d J=%d\n", I, J);
            }

            I = I + 2;
            J = (aux - 2) + 4;
            aux = J;
        }
    }

    return 0;
}
