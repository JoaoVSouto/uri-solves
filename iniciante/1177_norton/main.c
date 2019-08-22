#include <stdio.h>

int main() {
    int T, N[1010], i, j;
    scanf("%d", &T);
    for (i = 0; i < 1000; i++) {
        for (j = 0; j < T;) {
            N[i] = j;
            i++;
            j++;
        }
        j = 0;
        i = i - 1;
    }

    for (i = 0; i < 1000; i++) {
        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}

//gcc main.c -o main ; ./main
