#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
  unsigned M;
  unsigned N;
  bool *sieve;
  unsigned i;
  unsigned j;

  scanf("%u %u", &M, &N);

  sieve = calloc(N + 1, sizeof(bool));

  sieve[0] = sieve[1] = false;
  for (i = 2; i <= N; i ++) {
    sieve[i] = true;
  }

  for (i = 2; i <= N; i ++) {
    for (j = i * 2; j <= N; j += i) {
      sieve[j] = false;
    }
  }

  for (i = M; i <= N; i ++) {
    if (sieve[i]) {
      printf("%u\n", i);
    }
  }

  return 0;
}

