#include <stdio.h>

int main() {
    float a, b, c, auxiliar;
    scanf("%f %f %f", &a, &b, &c);

    if (b >= a && b >= c) {
        auxiliar = a;
        a = b;
        b = auxiliar;
    } else if (c >= a && c >= b) {
        auxiliar = a;
        a = c;
        c = auxiliar;
    }

    if (a < b + c) {
        if (a * a == (b * b + c * c)) {
            printf("TRIANGULO RETANGULO\n");
        } else if (a * a > (b * b + c * c)) {
            printf("TRIANGULO OBTUSANGULO\n");
        } else if (a * a < (b * b + c * c)) {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if (a == b && a == c) {
            printf("TRIANGULO EQUILATERO\n");
        } else if (a == b || a == c || b == c) {
            printf("TRIANGULO ISOSCELES\n");
        }
    } else {
        printf("NAO FORMA TRIANGULO\n");
    }

    return 0;
}
