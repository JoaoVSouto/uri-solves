#include <stdio.h>

int main() {
  char junk;
  int startingDay, startingHours, startingMinutes, startingSeconds;
  int finishingDay, finishingHours, finishingMinutes, finishingSeconds;
  int days, hours, minutes, seconds, i;

  for (i = 0; i < 3; i++) {
    junk = getchar();
  }
  scanf("%d", &startingDay);
  scanf("%d : %d : %d", &startingHours, &startingMinutes, &startingSeconds);

  for (i = 0; i < 4; i++) {
    junk = getchar();
  }
  scanf("%d", &finishingDay);
  scanf("%d : %d : %d", &finishingHours, &finishingMinutes, &finishingSeconds);

  days = finishingDay - startingDay;

  if (startingHours <= finishingHours) {
    hours = finishingHours - startingHours;
  } else {
    days--;
    hours = 24 - (startingHours - finishingHours);
  }

  if (startingMinutes <= finishingMinutes) {
    minutes = finishingMinutes - startingMinutes;
  } else {
    hours--;
    minutes = 60 - (startingMinutes - finishingMinutes);
  }

  if (startingSeconds <= finishingSeconds) {
    seconds = finishingSeconds - startingSeconds;
  } else {
    minutes--;
    seconds = 60 - (startingSeconds - finishingSeconds);
  }

  printf("%d dia(s)\n", days);
  printf("%d hora(s)\n", hours);
  printf("%d minuto(s)\n", minutes);
  printf("%d segundo(s)\n", seconds);

  return 0;
}
