#include <stdio.h>

typedef enum {
    false = 0,
    true = 1
} bool;

int main() {
    int senha = 2002, tentativa;
    while (true) {
        scanf("%d", &tentativa);
        if (tentativa == senha) {
            printf("Acesso Permitido\n");
            return false;
        } else {
            printf("Senha Invalida\n");
        }
    }

    return 0;
}