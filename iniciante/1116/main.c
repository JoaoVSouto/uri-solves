#include <stdio.h>

int main() {
    int j, i = 0, n1, n2;
    scanf("%d", &j);
    while (i < j) {
        scanf("%d %d", &n1, &n2);
        if (n2 == 0) {
            printf("divisao impossivel\n");
        } else {
            printf("%.1f\n", ((float)n1 / (float)n2));
        }

        i++;
    }

    return 0;
}