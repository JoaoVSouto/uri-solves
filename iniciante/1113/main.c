#include <stdio.h>

int main() {
    int x, y;
    while (0 == 0) {
        scanf("%d %d", &x, &y);
        if (x > y) {
            printf("Decrescente\n");

        } else if (y > x) {
            printf("Crescente\n");
        } else {
            return 0;
        }
    }
    return 0;
}

//gcc main.c -o main ; ./main