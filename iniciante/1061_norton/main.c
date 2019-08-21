#include <stdio.h>

int main() {
    int dia1, hora1, minuto1, segundo1;
    int dia2, hora2, minuto2, segundo2;
    int dia_f, hora_f, minuto_f, segundo_f;

    scanf("Dia %d", &dia1);
    scanf("%d : %d : %d\n", &hora1, &minuto1, &segundo1);
    scanf("Dia %d", &dia2);
    scanf("%d : %d : %d", &hora2, &minuto2, &segundo2);

    dia_f = dia2 - dia1;

    if (hora2 >= hora1) {
        hora_f = hora2 - hora1;

    } else {
        hora_f = 24 - hora1 + hora2;
        dia_f--;
    }
    if (minuto2 >= minuto1) {
        minuto_f = minuto2 - minuto1;

    } else {
        minuto_f = 60 - minuto1 + minuto2;
        hora_f--;
    }

    if (segundo2 >= segundo1) {
        segundo_f = segundo2 - segundo1;
    } else {
        segundo_f = 60 - segundo1 + segundo2;
        minuto_f--;
    }
    printf("%d dia(s)\n", dia_f);
    printf("%d hora(s)\n", hora_f);
    printf("%d minuto(s)\n", minuto_f);
    printf("%d segundo(s)\n", segundo_f);

    return 0;
}