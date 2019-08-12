#include <stdio.h>

int main() {
    int x, y, soma = 0;
    scanf("%d", &x);
    scanf("%d", &y);
    if (x > y) {
        for (y; y <= x;) {
            if (y % 13 != 0) {
                soma += y;
            }
            y++;
        }
        printf("%d\n", soma);
        return 0;
    } else if (y > x) {
        for (x; x <= y;) {
            if (x % 13 != 0) {
                soma += x;
            }
            x++;
        }
        printf("%d\n", soma);
        return 0;
    } else {
        printf("0");
    }

    return 0;
}
