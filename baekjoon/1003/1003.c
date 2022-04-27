#include <stdio.h>

int main() {
  unsigned previous;
  unsigned current;
  unsigned temp;
  unsigned T;
  unsigned N;
  unsigned i;
  unsigned j;

  scanf("%u", &T);

  for (i = 0; i < T; i ++) {
    scanf("%u", &N);

    if (N == 0) {
      printf("1 0\n");
      continue;
    } else if (N == 1) {
      printf("0 1\n");
      continue;
    } else if (N == 2) {
      printf("1 1\n");
      continue;
    }

    previous = current = 1;

    for (j = 3; j <= N; j ++) {
      temp = current;
      current += previous;
      previous = temp;
    }

    printf("%u %u\n", previous, current);
  }

  return 0;
}

