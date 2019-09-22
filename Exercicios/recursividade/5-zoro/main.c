#include <stdio.h>

int zoroTotal(int x_i, int y_i, int* x_f, int* y_f) {
    if (x_i == *x_f && *y_f == y_i) {
        printf("Chega em (%d %d)\n", *x_f, *y_f);
        return 0;
    } else {
        printf("Passa por (%d %d)\n", x_i, y_i);
        if (x_i > *x_f) {
            return zoroTotal(x_i - 1, y_i, x_f, y_f);
        }
        if (x_i < *x_f) {
            return zoroTotal(x_i + 1, y_i, x_f, y_f);
        }
        if (y_i > *y_f) {
            return zoroTotal(x_i, y_i - 1, x_f, y_f);
        }
        if (y_i < *y_f) {
            return zoroTotal(x_i, y_i + 1, x_f, y_f);
        }
    }
}

int main() {
    int x_inicial, y_inicial, x_final, y_final;
    printf("Digite as coordenadas iniciais x y\n");
    scanf("%d %d", &x_inicial, &y_inicial);
    printf("Digite as coordenadas finais x y\n");
    scanf("%d %d", &x_final, &y_final);

    zoroTotal(x_inicial, y_inicial, &x_final, &y_final);

    return 0;
}
