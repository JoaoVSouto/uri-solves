#include <stdio.h>
int josephusLoop(int n, int k, int startingPoint) {
  if (n == 1)
    return 1;

  int newSp, survivor;
  newSp = (startingPoint + k - 2) % n + 1;
  survivor = josephusLoop(n - 1, k, newSp);

  if (survivor < newSp) {
    return survivor;
  } else {
    return survivor + 1;
  }
}

int josephus(int n, int k) {
  return josephusLoop(n, k, 1);
}

int main() {
  int nc, n, k, s, i;
  scanf("%d", &nc);

  for (i = 1; i <= nc; i++) {
    scanf("%d %d", &n, &k);
    s = josephus(n, k);
    printf("Case %d: %d\n", i, s);
  }

  return 0;
}