#include <stdio.h>
#include <stdlib.h>

int main() {
  short x1, y1, x2, y2, diffX, diffY;

  do {
    scanf("%hd %hd %hd %hd", &x1, &y1, &x2, &y2);

    if (!(x1 && y1 && x2 && y2)) break;

    diffX = abs(x1 - x2);
    diffY = abs(y1 - y2);

    if (x1 == x2 && y1 == y2) {
      printf("0\n");
    } else if (diffX == diffY || diffX == 0 || diffY == 0) {
      printf("1\n");
    } else {
      printf("2\n");
    }

  } while (1);

  return 0;
}
