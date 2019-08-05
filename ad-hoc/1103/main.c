#include <stdio.h>

int convertMinutes(int minutoInicial, int minutoFinal, int horas) {
  int minutos;

  if (minutoInicial <= minutoFinal) {
    minutos = minutoFinal - minutoInicial;
  } else {
    minutos = minutoFinal - minutoInicial + 60;
    horas -= 60;
  }
  minutos += horas;

  return minutos;
}

int main() {
  int horaInicial, minutoInicial, horaFinal, minutoFinal, horas, minutos;

  do {
    scanf("%d %d %d %d", &horaInicial, &minutoInicial, &horaFinal, &minutoFinal);

    if (!(horaInicial || minutoInicial || horaFinal || minutoFinal)) break;

    if (horaInicial < horaFinal) {
      horas = horaFinal * 60 - horaInicial * 60;
      minutos = convertMinutes(minutoInicial, minutoFinal, horas);
    } else if (horaInicial > horaFinal) {
      horas = 24 * 60 - (horaInicial * 60 - horaFinal * 60);
      minutos = convertMinutes(minutoInicial, minutoFinal, horas);
    } else {
      if (minutoInicial <= minutoFinal) {
        minutos = minutoFinal - minutoInicial;
      } else {
        minutos = 24 * 60 - (minutoInicial - minutoFinal);
      }
    }

    printf("%d\n", minutos);

  } while (1);

  return 0;
}
