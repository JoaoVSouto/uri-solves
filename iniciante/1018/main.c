#include <stdio.h>

int main() {
    int x, cem = 0, cinq = 0, vint = 0, dez = 0, cinc = 0, dois = 0, um = 0;
    scanf("%d", &x);
    printf("%d\n", x);

    if (x >= 100) {
        cem = x / 100;
    }
    x = (x % 100);
    if (x >= 50) {
        cinq = x / 50;
    }
    x = (x % 50);
    if (x >= 20) {
        vint = x / 20;
    }
    x = (x % 20);
    if (x >= 10) {
        dez = x / 10;
    }

    x = (x % 10);
    if (x >= 5) {
        cinc = x / 5;
    }
    x = (x % 5);
    if (x >= 2) {
        dois = x / 2;
    }
    x = (x % 2);
    if (x >= 1) {
        um = x;
    }

    printf("%d nota(s) de R$ 100,00\n", cem);
    printf("%d nota(s) de R$ 50,00\n", cinq);
    printf("%d nota(s) de R$ 20,00\n", vint);
    printf("%d nota(s) de R$ 10,00\n", dez);
    printf("%d nota(s) de R$ 5,00\n", cinc);
    printf("%d nota(s) de R$ 2,00\n", dois);
    printf("%d nota(s) de R$ 1,00\n", um);

    return 0;
}

//gcc -o cedula cedula.c && .\cedula