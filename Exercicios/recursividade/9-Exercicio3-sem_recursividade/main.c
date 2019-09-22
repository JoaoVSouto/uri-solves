#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    float array[n], soma = 0;
    for (i = 0; i < n; i++) {
        scanf("%f", &array[i]);
    }
    for (i = n - 1; i >= 0; i--) {
        printf("%.1f ", array[i]);
    }

    return 0;
}