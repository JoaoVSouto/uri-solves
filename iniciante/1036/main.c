#include <math.h>
#include <stdio.h>

int main() {
    double a, b, c, r1, r2, delta;
    scanf("%lf %lf %lf", &a, &b, &c);
    //calcula delta
    delta = ((b * b) - (4 * a * c));
    //verifica condição de duas raizes
    if (delta > 0 && a > 0) {
        r2 = (-b - sqrt(delta)) / (2 * a);
        r1 = (-b + sqrt(delta)) / (2 * a);
        printf("R1 = %.5lf\n", r1);
        printf("R2 = %.5lf\n", r2);
        //verifica condição em que é impossivel calcular
    } else if (delta < 0 || a <= 0) {
        printf("Impossivel calcular\n");
    }

    return 0;
}

//gcc main.c -o main -lm && ./main
