#include <stdio.h>

int main() {
    int hora_inicial, minuto_inicial, hora_final, minuto_final, duracao_hora, duracao_minuto = 0;
    scanf("%d %d %d %d", &hora_inicial, &minuto_inicial, &hora_final, &minuto_final);
    //descobre a duração hora
    duracao_hora = 24 - hora_inicial + hora_final;
    //descobre duração minuto
    duracao_minuto = 60 - minuto_inicial + minuto_final;
    /*trata a duração hora de acordo com comparações do minuto inical
    com minuto final e da duracao hora com 24 */
    if (duracao_hora > 24 && minuto_inicial <= minuto_final) {
        duracao_hora = duracao_hora - 24;
    } else if (duracao_hora >= 24 && minuto_inicial > minuto_final) {
        duracao_hora = duracao_hora - 25;
    } else if (duracao_hora < 24 && minuto_inicial > minuto_final) {
        duracao_hora = duracao_hora - 1;
    }
    /* se após o tratamento inical a duracao minuto/duração hora receberem
    valores absurdos (i.e:duracao_hora = -1) receberão os seguintes tratamentos */
    if (duracao_minuto > 59) {
        duracao_minuto = duracao_minuto - 60;
    }
    if (duracao_hora < 0) {
        duracao_hora = duracao_hora + 24;
    }
    if (duracao_hora >= 24 && duracao_minuto > 0) {
        duracao_hora = 0;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracao_hora, duracao_minuto);

    return 0;
}

//gcc -o main main.c ; .\main
