#include <stdio.h>

int main() {
    int I = 1, J = 7;
    while (I != 10 && J != 5) {
        if (I % 2 != 0) {
            printf("I=%d J=%d\n", I, J);
        }

        J--;
        if (J == 5) {
            if (I % 2 != 0) {
                printf("I=%d J=%d\n", I, J);
            }

            J = 7;
            I++;
        }
    }

    return 0;
}
