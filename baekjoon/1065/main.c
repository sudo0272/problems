#include <stdio.h>
#include <stdbool.h>

bool isHansu(unsigned);

int main() {
  unsigned N;
  unsigned hansuCount;
  unsigned i;

  scanf("%u", &N);

  hansuCount = 0;
  for (i = 1; i <= N; i ++) {
    if (isHansu(i)) {
      hansuCount ++;
    }
  }

  printf("%u\n", hansuCount);

  return 0;
}

bool isHansu(unsigned n) {
  int previousDifference = 0;
  int currentDifference = 0;

  if (n <= 99) {
    return true;
  }

  currentDifference = (n / 10) % 10 - n % 10;
  n /= 10;
  do {
    previousDifference = currentDifference;
    currentDifference = (n / 10) % 10 - n % 10;
    n /= 10;
  } while (n >= 10 && previousDifference == currentDifference);

  return previousDifference == currentDifference;
}

