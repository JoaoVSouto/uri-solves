#include <stdio.h>
int main() {
    int valor, quantidade_alcool = 0, quantidade_gasolina = 0, quantidade_diesel = 0;
    int bool = 1;

    while (bool == 1) {
        scanf("%d", &valor);

        switch (valor) {
            case 1:
                quantidade_alcool++;
                break;

            case 2:
                quantidade_gasolina++;
                break;

            case 3:
                quantidade_diesel++;
                break;

            case 4:
                bool = 0;
                break;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", quantidade_alcool);
    printf("Gasolina: %d\n", quantidade_gasolina);
    printf("Diesel: %d\n", quantidade_diesel);
    return 0;
}