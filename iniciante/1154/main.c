#include <stdio.h>

int main() {
    int n = 0, i = 0, sum_idades = 0;
    float media;
    while (n >= 0) {
        scanf("%d", &n);
        if (n >= 0) {
            sum_idades += n;
            i++;
        }
    }
    media = ((float)sum_idades / (float)i);
    printf("%.2f\n", media);

    return 0;
}