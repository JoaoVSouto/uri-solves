#include <stdio.h>

int main() {
    int N, i, j,k,y,f;

    while (scanf("%d", &N) != EOF) {
        k=1;
        y =2;
        f=1;
        int matriz[N][N];
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {

                matriz[i][j] = 1;
                 if (i > 0 && i < N-1 && j> 0 && j < N-1)
                    {
                        matriz[i][j] =y;
                        
                    }else if (N % 2 != 0 && N>1) {
                            int centro = N / 2;
                            matriz[centro][centro] = k;
                            y = k-1;
                        }
                

                printf(" %d ", matriz[i][j]);
            }
            k++;
            printf("\n");
        }
    }

    return 0;
}

//gcc main.c -o main && ./main
/* 
i = 1,2,
j = 1,2,
*/