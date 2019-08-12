#include <stdio.h>

int main() {
    int n = 1, i;
    while (n != 0) {
        scanf("%d", &n);
        if (n != 0) {
            for (i = 1; i < n; i++) {
                printf("%d ", i);
            }
            printf("%d\n", n);
        }
    }

    return 0;
}