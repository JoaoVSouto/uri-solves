#include <stdio.h>
typedef enum {
    false,
    true
} bool;

int main() {
    int N, i = 0, numero, j, contador_n_primo;
    bool verificador;
    scanf("%d", &N);
    while (i < N) {
        verificador = false;
        scanf("%d", &numero);
        for (j = 2; j < numero; j++) {
            if (numero % j == 0) {
                verificador = true;
            }
        }
        if (verificador) {
            printf("%d nao eh primo\n", numero);
        } else {
            printf("%d eh primo\n", numero);
        }
        i++;
    }

    return 0;
}
//gcc main.c -o main ; ./main
