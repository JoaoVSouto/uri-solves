#include <stdio.h>

#define NUMBER_OF_DAYS 3

typedef enum { sad,
               happy } mood;

int main() {
  int days[NUMBER_OF_DAYS], diffDay1To2, diffDay2To3, i;
  mood m = sad;

  for (i = 0; i < NUMBER_OF_DAYS; i++)
    scanf("%d", &days[i]);

  diffDay1To2 = days[0] - days[1];
  diffDay2To3 = days[1] - days[2];

  if ((diffDay1To2 > 0 && diffDay2To3 <= 0) ||
      (diffDay1To2 < 0 && diffDay2To3 < 0 && diffDay2To3 <= diffDay1To2) ||
      (diffDay1To2 > 0 && diffDay2To3 > 0 && diffDay2To3 < diffDay1To2) ||
      (diffDay1To2 == 0 && diffDay2To3 < 0)) {
    m = happy;
  }

  if (m == happy)
    printf(":)\n");
  else
    printf(":(\n");

  return 0;
}
