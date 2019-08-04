#include <stdio.h>

int main() {
    int tempo, velocidade;
    float litros;
    scanf("%d", &tempo);
    scanf("%d", &velocidade);
    printf("%.3f\n", ((float)(tempo * velocidade) / 12));

    return 0;
}