#include <stdio.h>
#include <stdlib.h>

int *uniao(int *n1, int *n2, int tam_n1, int tam_n2, int *qtd) {
    int *n3, i;
    *qtd = tam_n1 + tam_n2;
    n3 = calloc(*qtd, sizeof(int));

    for (i = 0; i < tam_n1; i++) {
        n3[i] = n1[i];
    }
    for (i = 0; i < tam_n2; i++) {
        n3[i + tam_n1] = n2[i];
    }

    return n3;
}

int main() {
    int *v1, *v2, tam_v1, tam_v2, tam_v3, i;
    scanf("%d", &tam_v1);
    scanf("%d", &tam_v2);
    v1 = calloc(tam_v1, sizeof(int));
    v2 = calloc(tam_v2, sizeof(int));
    for (i = 0; i < tam_v1; i++) {
        scanf("%d", &v1[i]);
    }
    for (i = 0; i < tam_v2; i++) {
        scanf("%d", &v2[i]);
    }
    int *v3;
    v3 = uniao(v1, v2, tam_v1, tam_v2, &tam_v3);

    for (i = 0; i < tam_v3; i++) {
        printf("%d ", v3[i]);
    }
    printf("\n");
    free(v1);
    free(v2);
    free(v3);

    return 0;
}
