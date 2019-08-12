#include <stdio.h>

int main() {
    int n, i = 1;
    scanf("%d", &n);
    while (i <= 10) {
        printf("%d x %d = %d\n", i, n, (i * n));
        i++;
    }

    return 0;
}
//gcc -o main main.c ; .\main PoWeRsHeLl
//gcc main.c -o main && ./main