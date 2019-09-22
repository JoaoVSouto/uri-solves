#include <stdio.h>

int somar(int n, int array[n]) {
    if (n == 0)
        return 0;
    else {
        return array[n - 1] + somar(n - 1, array);
    }
}

int main() {
    int n, i;
    scanf("%d", &n);
    int array[n], soma = 0;
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    printf("A soma eh: %d", somar(n, array));

    return 0;
}
