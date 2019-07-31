#include <stdio.h>

int main() {
    int hora_inicial, hora_final, duracao;
    scanf("%d %d", &hora_inicial, &hora_final);
    duracao = 24 - hora_inicial + hora_final;
    if (duracao > 24) {
        duracao = duracao - 24;
    }
    printf("O JOGO DUROU %d HORA(S)\n", duracao);

    return 0;
}
