#include <stdio.h>
int main() {
    int x, y, n, i = 0, j, soma;
    scanf("%d", &n);
    while (i < n) {
        scanf("%d %d", &x, &y);
        for (j = 0, soma = 0; j < y;) {
            if (x % 2 != 0) {
                soma += x;
                j++;
            }
            x++;
        }
        printf("%d\n", soma);
        i++;
    }

    return 0;
}
