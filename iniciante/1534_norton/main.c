#include <stdio.h>

int main() {
    int N, i, j, k = 0;

    while (scanf("%d", &N) != EOF) {
        int matriz[N][N];
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                k++;

                if (i == j) {
                    matriz[i][j] = 1;
                } else if (i + j == N - 1) {
                    matriz[i][j] = 2;
                } else {
                    matriz[i][j] = 3;
                }

                if (N % 2 != 0) {
                    int centro = N / 2;
                    matriz[centro][centro] = 2;
                }

                printf("%d", matriz[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}