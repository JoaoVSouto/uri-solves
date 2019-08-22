#include <stdio.h>

int main() {
    int numero, V_par[5], V_impar[5], i, j, k, aux1 = 0, aux2 = 0;
    int contador_impar = 0, contador_par = 0;
    for (i = 0; i < 15; i++) {
        scanf("%d", &numero);
        if (aux1 == 1) {
            contador_par = 0;
            aux1 = 0;
        }
        if (aux2 == 1) {
            contador_impar = 0;
            aux2 = 0;
        }

        if (numero % 2 == 0) {
            if (contador_par >= 4) {
                for (j = 0; j < 5; j++) {
                    V_par[contador_par] = numero;
                    printf("par[%d] = %d\n", j, V_par[j]);
                    aux1 = 1;
                }
            }
            V_par[contador_par] = numero;
            contador_par++;

        } else {
            if (contador_impar >= 4) {
                for (k = 0; k < 5; k++) {
                    V_impar[contador_impar] = numero;
                    printf("impar[%d] = %d\n", k, V_impar[k]);
                    aux2 = 1;
                }
            }
            V_impar[contador_impar] = numero;
            contador_impar++;
        }
    }
    for (i = 0; i < contador_impar; i++) {
        printf("impar[%d] = %d\n", i, V_impar[i]);
    }
    for (i = 0; i < contador_par; i++) {
        printf("par[%d] = %d\n", i, V_par[i]);
    }

    return 0;
}
