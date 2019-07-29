#include <stdio.h>

int giveNumberOnCircle(int fromNumber, int step, int circleSize) {
  int sum = fromNumber + step;
  if (sum > circleSize) {
    return sum - circleSize;
  }
  return sum;
}

int main() {
  int numberOfPeople, step, i;

  scanf("%d %d", &numberOfPeople, &step);

  int people[numberOfPeople], remainingPeople = numberOfPeople, kill = step, track = step, count = kill;

  // fill the array with crescent order of numbers
  // i.e 5 => [1, 2, 3, 4, 5]
  for (i = 1; i <= numberOfPeople; i++)
    people[i - 1] = i;

  while (remainingPeople != 1) {
    remainingPeople--;
    people[kill - 1] = 0;
    count = kill;
    do {
      track = giveNumberOnCircle(count, 1, numberOfPeople);
      count++;
    } while (people[track - 1] == 0);
    count = track;
    do {
      kill = giveNumberOnCircle(count, step - 1, numberOfPeople);
      count++;
    } while (people[kill - 1] == 0);
  }
  // [1, 2, 3, 4, 5, 6] s: 3 => 1
  // [1, 2, 3, 4, 5, 6]

  for (i = 0; i < numberOfPeople; i++) {
    if (people[i] != 0) {
      printf("caba que n morreu: %d\n", people[i]);
    }
  }

  return 0;
}
