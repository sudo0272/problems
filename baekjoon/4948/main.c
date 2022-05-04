#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
  unsigned n;
  unsigned n2;
  unsigned primeCount;
  bool sieve[123456 * 2 + 1];
  unsigned i;
  unsigned j;

  sieve[0] = sieve[1] = false;

  while (scanf("%u", &n) && n != 0) {
    n2 = 2 * n;

    for (i = n + 1; i <= n2; i ++) {
      sieve[i] = true;
    }

    for (i = 2; i <= n2; i ++) {
      for (j = i * 2; j <= n; j += i);

      for (; j <= n2; j += i) {
        sieve[j] = false;
      }
    }

    primeCount = 0;
    for (i = n + 1; i <= n2; i ++) {
      if (sieve[i]) {
        primeCount ++;
      }
    }

    printf("%u\n", primeCount);
  }

  return 0;
}

