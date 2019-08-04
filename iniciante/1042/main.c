#include <stdio.h>

int main() {
    int a, b, c, aux1, aux2, aux3;
    scanf("%d %d %d", &a, &b, &c);
    aux1 = a;
    aux2 = b;
    aux3 = c;
    if (a > b && a > c) {
        aux1 = a;
        if (b > c) {
            aux2 = b;
            aux3 = c;
        } else {
            aux2 = c;
            aux3 = b;
        }
    } else if (b > a && b > c) {
        aux1 = b;
        if (a > c) {
            aux2 = a;
            aux3 = c;
        } else {
            aux2 = c;
            aux3 = a;
        }
    } else if (c > b && c > a) {
        aux1 = c;
        if (b > a) {
            aux2 = b;
            aux3 = a;
        } else {
            aux2 = a;
            aux3 = b;
        }
    }

    printf("%d\n", aux3);
    printf("%d\n", aux2);
    printf("%d\n", aux1);
    printf("\n");
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);

    return 0;
}