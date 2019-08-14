#include <stdio.h>

int main() {
    int i;
    float S = 0;
    for (i = 1; i <= 100; i++) {
        S += ((float)1 / (float)i);
    }
    printf("%.2f\n", S);

    return 0;
}