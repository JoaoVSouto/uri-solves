#include <stdio.h>

int main() {
    int x, y, i = 0, a = 1;
    scanf("%d %d", &x, &y);
    while (i < y) {
        printf("%d", a);
        if (a % x == 0) {
            printf("\n");
        } else {
            printf(" ");
        }
        a++;
        i++;
    }

    return 0;
}

//&& a != y
//|| i == y - 1