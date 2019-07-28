#include <stdio.h>

int main() {
    int N, i = 0, quantia, total_cobaia = 0, total_coelho = 0, total_rato = 0, total_sapo = 0;
    float percentual_coelho = 0.00, percentual_sapo = 0.00, percentual_rato = 0.00;
    char cobaia;
    scanf("%d", &N);
    while (N > i) {
        scanf("%d %c", &quantia, &cobaia);
        total_cobaia = quantia + total_cobaia;
        if (cobaia == 'C') {
            total_coelho = quantia + total_coelho;
        } else

            if (cobaia == 'R') {
            total_rato = quantia + total_rato;
        } else

            if (cobaia == 'S') {
            total_sapo = quantia + total_sapo;
        }

        i += 1;
    }

    printf("Total: %d cobaias\n", total_cobaia);
    printf("Total de coelhos: %d\n", total_coelho);
    printf("Total de ratos: %d\n", total_rato);
    printf("Total de sapos: %d\n", total_sapo);
    printf("Percentual de coelhos: %.2f %%\n", ((float)total_coelho * 100 / (float)total_cobaia));
    printf("Percentual de ratos: %.2f %%\n", ((float)total_rato * 100 / (float)total_cobaia));
    printf("Percentual de sapos: %.2f %%\n", ((float)total_sapo * 100 / (float)total_cobaia));

    return 0;
}
