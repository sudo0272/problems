#include <stdio.h>

int main() {
  unsigned T;
  unsigned k;
  unsigned n;
  unsigned cells[15];
  unsigned i;
  unsigned j;
  unsigned cellIndex;

  scanf("%u", &T);

  for (i = 0; i < T; i ++) {
    scanf("%u", &k);
    scanf("%u", &n);

    for (j = 0; j <= k; j ++) {
      cells[j] = 1;
    }

    for (j = 1; j < n; j ++) {
      cells[0] ++;

      for (cellIndex = 1; cellIndex <= k; cellIndex ++) {
        cells[cellIndex] += cells[cellIndex - 1];
      }
    }

    printf("%u\n", cells[k]);
  }

  return 0;
}

