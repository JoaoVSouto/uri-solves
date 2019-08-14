#include <stdio.h>

int main() {
    int n, produtorio = 1;
    scanf("%d", &n);
    for (n; n >= 1; n--) {
        produtorio *= n;
    }
    printf("%d\n", produtorio);

    return 0;
}