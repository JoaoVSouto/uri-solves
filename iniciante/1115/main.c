#include <stdio.h>

typedef enum {
    false = 0,
    true = 1
} bool;

int main() {
    float x, y;
    while (true) {
        scanf("%f %f", &x, &y);
        if (x > 0 && y > 0) {
            printf("primeiro\n");
        } else if (x < 0 && y > 0) {
            printf("segundo\n");
        } else if (x < 0 && y < 0) {
            printf("terceiro\n");
        } else if (x > 0 && y < 0) {
            printf("quarto\n");
        } else if (x == 0 || y == 0) {
            return false;
        }
    }
    return 0;
}
