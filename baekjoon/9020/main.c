#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define N_MAX 10000

int main() {
  unsigned T;
  unsigned n;
  bool sieve[N_MAX + 1];
  unsigned i;
  unsigned j;

  sieve[0] = sieve[1] = false;
  for (i = 2; i <= N_MAX; i ++) {
    sieve[i] = true;
  }

  for (i = 2; i <= N_MAX; i ++) {
    for (j = i * 2; j <= N_MAX; j += i) {
      sieve[j] = false;
    }
  }

  scanf("%u", &T);

  for (i = 0; i < T; i ++) {
    scanf("%u", &n);

    for (j = n / 2; j >= 2; j --) {
      if (sieve[j] && sieve[n - j]) {
        printf("%u %u\n", j, n - j);
        break;
      }
    }

  }

  return 0;
}

