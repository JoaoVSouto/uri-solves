#include <math.h>
#include <stdio.h>

void laco(int T);
void calculo(int PA, int PB, float G1, float G2);

void laco(int T) {
    int i = 0, PA, PB;
    float G1, G2;
    while (T > i) {
        scanf("%d %d %f %f", &PA, &PB, &G1, &G2);
        i++;
        calculo(PA, PB, G1, G2);
    }
}

void calculo(int PA, int PB, float G1, float G2) {
    int anos = 0;
    while (PA <= PB) {
        PA = (int)floor((G1 * PA / 100) + PA);
        PB = (int)floor((G2 * PB / 100) + PB);
        anos++;
        if (anos > 100) {
            printf("Mais de 1 seculo.\n");
            break;
        }
    }
    if (anos <= 100) {
        printf("%d anos.\n", anos);
    }
}
int main() {
    int T;
    scanf("%d", &T);
    laco(T);
    return 0;
}

//gcc main.c -o main -lm ; ./main