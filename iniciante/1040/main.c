#include <stdio.h>

int main() {
    float N1, N2, N3, N4, media, N5, new_media;
    scanf("%f %f %f %f", &N1, &N2, &N3, &N4);
    media = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1) / 10;

    if (media >= 7.0) {
        printf("Media: %.1f\n", media);
        printf("Aluno aprovado.\n");
        return 0;
    } else if (media < 5.0) {
        printf("Media: %.1f\n", media);
        printf("Aluno reprovado.\n");
        return 0;
    } else if (5.0 <= media && media < 7.0) {
        printf("Media: %.1f\n", media);
        printf("Aluno em exame.\n");
        scanf("%f", &N5);
        new_media = (media + N5) / 2;
    }
    if (new_media >= 5.0) {
        printf("Nota do exame: %.1f\n", N5);
        printf("Aluno aprovado.\n");
        printf("Media final: %.1f\n", (new_media));
    } else {
        printf("Nota do exame: %.1f\n", N5);
        printf("Aluno reprovado.\n");
        printf("Media final: %.1f\n", (new_media));
    }

    return 0;
}
