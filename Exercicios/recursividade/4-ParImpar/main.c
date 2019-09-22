#include <stdio.h>

int ehPar(int n) {
    if (n == 0)
        return 1;
    else
        return ehImpar(n - 1);
}
int ehImpar(int n) {
    if (n == 0)
        return 0;
    else
        return ehPar(n - 1);
}

int main() {
    int n, x;
    scanf("%d", &n);
    x = ehpar(n);
    if (x == 1) {
        printf("eh par");

    } else {
        printf("eh impar");
    }

    return 0;
}
