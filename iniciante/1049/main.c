#include <stdio.h>
#include <string.h>

int main() {
    char filo[20], sub_filo[20], ordem[20];
    scanf("%s", &filo);
    scanf("%s", &sub_filo);
    scanf("%s", &ordem);
    if (strcmp(filo, "vertebrado") == 0) {
        if (strcmp(sub_filo, "ave") == 0) {
            if (strcmp(ordem, "carnivoro") == 0) {
                printf("aguia\n");
            } else {
                printf("pomba\n");
            }
        } else {
            if (strcmp(ordem, "onivoro") == 0) {
                printf("homem\n");
            } else {
                printf("vaca\n");
            }
        }

    } else {
        if (strcmp(sub_filo, "inseto") == 0) {
            if (strcmp(ordem, "hematofago") == 0) {
                printf("pulga\n");
            } else {
                printf("lagarta\n");
            }

        } else {
            if (strcmp(ordem, "hematofago") == 0) {
                printf("sanguessuga\n");
            } else {
                printf("minhoca\n");
            }
        }
    }

    return 0;
}