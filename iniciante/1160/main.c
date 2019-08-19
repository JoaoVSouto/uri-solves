#include <math.h>
#include <stdio.h>

int main() {
  short testCases, i, years;
  int PA, PB;
  float G1, G2;

  scanf("%hd", &testCases);

  for (i = 0; i < testCases; i++) {
    scanf("%d %d %f %f", &PA, &PB, &G1, &G2);

    while (PA <= PB) {
      PA = (int)PA * (G1 / 100) + PA;
      PB = (int)PB * (G2 / 100) + PB;
      years++;
      if (years > 100) {  // testar curto circuito dps
        printf("Mais de 1 seculo.\n");
        break;
      }
    }

    if (years <= 100) {
      printf("%hd anos.\n", years);
    }
    years = 0;
  }

  return 0;
}
