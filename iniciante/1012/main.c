#include <stdio.h>

int main() {
    double A, B, C;
    const float pi = 3.14159;
    scanf("%lf %lf %lf", &A, &B, &C);
    printf("TRIANGULO: %.3lf\n", (A * C / 2));
    printf("CIRCULO: %.3lf\n", pi * C * C);
    printf("TRAPEZIO: %.3lf\n", (((A + B) * C) / 2));
    printf("QUADRADO: %.3lf\n", B * B);
    printf("RETANGULO: %.3lf\n", A * B);
    //Calcula

    return 0;
}
//cmd: gcc -o area area.c && .\area