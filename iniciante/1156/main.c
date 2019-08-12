#include <stdio.h>

int main() {
    int i, j;
    float S = 0;
    for (i = 1, j = 1; j < 39;) {
        j = j + 2;
        i = i * 2;
        S += ((float)j / (float)i);
    }
    printf("%.2f\n", (S + 1));

    return 0;
}