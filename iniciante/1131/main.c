#include <stdio.h>

int main() {
  int gol_inter, gol_gremio, sim = 1, total_gol_inter = 0, verifica = 1;
  int total_gol_gremio = 0, contador_grenais = 0, venceu_inter = 0, venceu_gremio = 0, empate = 0;
  while (verifica == 1) {
    scanf("%d %d", &gol_inter, &gol_gremio);
    printf("Novo grenal (1-sim 2-nao)\n");
    total_gol_inter = total_gol_inter + gol_inter;
    total_gol_gremio = total_gol_gremio + gol_gremio;
    contador_grenais++;
    scanf("%d", &sim);
    if (sim != 1) {
      verifica = 0;
    }
    if (gol_inter > gol_gremio) {
      venceu_inter++;
    } else if (gol_gremio > gol_inter) {
      venceu_gremio++;
    } else {
      empate++;
    }
  }
  printf("%d grenais\n", contador_grenais);
  printf("Inter:%d\n", venceu_inter);
  printf("Gremio:%d\n", venceu_gremio);
  printf("Empates:%d\n", empate);

  if (total_gol_inter > total_gol_gremio) {
    printf("Inter venceu mais\n");
  } else if (total_gol_gremio > total_gol_inter) {
    printf("Gremio venceu mais\n");
  } else {
    printf("Nao houve vencedor\n");
  }

  return 0;
}

//gcc main.c -o main && ./main
