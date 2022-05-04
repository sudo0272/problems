#include <stdio.h>

int main() {
  unsigned N;
  unsigned i;

  scanf("%u", &N);

  i = 2;
  while (N > 1) {
    if (N % i == 0) {
      printf("%u\n", i);
      N /= i;

    } else {
      i ++;
    }
  }

  return 0;
}

