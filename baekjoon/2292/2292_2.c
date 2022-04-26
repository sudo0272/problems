#include <stdio.h>

int main() {
  unsigned int N;
  unsigned int shellCount = 1;
  unsigned int total = 1;

  scanf("%u", &N);

  while (total < N) {
    total += (shellCount ++) * 6;
  }

  printf("%u", shellCount);

  return 0;
}

