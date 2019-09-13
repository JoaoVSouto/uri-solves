#include <stdio.h>
#include <stdlib.h>

int *uniao(int *x1, int *x2, int n1, int n2, int *qtd) {
  int *x3, i = 0;

  x3 = calloc(n1 + n2, sizeof(int));

  *qtd = n1 + n2;

  while (i < *qtd) {
    if (i >= n1) {  // chegamos ao fim do primeiro vetor
      *x3 = *x2;
      x2++;
      printf("x3[%d] = %d\n", i, *x3);
    } else {
      *x3 = *x1;
      printf("x3[%d] = %d\n", i, *x3);
      x1++;
    }
    x3++;
    i++;
  }

  return x3 - i;
}

int main() {
  int i;
  int *v1, *v2, tam_v1, tam_v2, *v3, tam_v3;

  scanf("%d", &tam_v1);
  scanf("%d", &tam_v2);

  v1 = calloc(tam_v1, sizeof(int));
  v2 = calloc(tam_v2, sizeof(int));

  for (i = 0; i < tam_v1; i++)
    scanf("%d", &v1[i]);
  for (i = 0; i < tam_v2; i++)
    scanf("%d", &v2[i]);

  v3 = uniao(v1, v2, tam_v1, tam_v2, &tam_v3);

  for (i = 0; i < tam_v3; i++) {
    printf("%d ", *v3);
    v3++;
  }
  printf("\n");

  v3 = v3 - i;

  free(v1);
  free(v2);
  free(v3);

  return 0;
}
