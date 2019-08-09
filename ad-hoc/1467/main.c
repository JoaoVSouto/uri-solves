#include <stdio.h>

char checkWinner(short p1, short p2, short p3) {
  if (p1 == p2 && p1 == p3) {
    return '*';
  }
  if (p1 == p2) {
    return 'C';
  }
  if (p1 == p3) {
    return 'B';
  }
  if (p2 == p3) {
    return 'A';
  }
}

int main() {
  short unsigned plays[3];
  char c;

  while (scanf("%hu", &plays[0]) != EOF) {
    scanf("%hu", &plays[1]);
    scanf("%hu", &plays[2]);
    c = checkWinner(plays[0], plays[1], plays[2]);
    printf("%c\n", c);
  }

  return 0;
}
