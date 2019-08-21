#include <stdio.h>

int main() {
  int centena1, dezena1, unidade1;
  int centena2, dezena2, unidade2;
  int centena, dezena, unidade, i;

  scanf("%d %d %d", &centena1, &dezena1, &unidade1);
  scanf("%d %d %d", &centena2, &dezena2, &unidade2);

  int N1[] = {centena1, dezena1, unidade1};
  int N2[] = {centena2, dezena2, unidade2};

  if (unidade1 >= unidade2) {
    unidade = unidade1 - unidade2;
  } else {
    unidade = 10 + unidade1 - unidade2;
    dezena1--;
  }

  if (dezena1 >= dezena2) {
    dezena = dezena1 - dezena2;
  } else {
    dezena = 10 + dezena1 - dezena2;
    centena1--;
  }

  centena = centena1 - centena2;

  int N[] = {centena, dezena, unidade};

  for (i = 0; i < 3; i++) {
    printf("%d ", N[i]);
  }

  printf("\n");

  return 0;
}
<<<<<<< HEAD
=======

// 2 3 3
// 1 9 8
// 35
>>>>>>> 3ed92077f969c00470581f3c189d882d501b15cb
