#include <stdio.h>

int main() {
    int dist_pec;
    float comb_gast;
    scanf("%d", &dist_pec);
    scanf("%f", &comb_gast);
    printf("%.3f km/l\n", (dist_pec / comb_gast));
    return 0;
}
