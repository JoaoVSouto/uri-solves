#include <stdio.h>

int main() {
    int n, i = 0, a = 1, b = 1, c = 1;
    scanf("%d", &n);
    while (i < n) {
        printf("%d %d %d\n", a, b, c);
        a = a + 1;
        b = a * a;
        c = a * a * a;
        i++;
    }

    return 0;
}