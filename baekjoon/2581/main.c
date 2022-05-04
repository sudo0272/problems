#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(unsigned);

int main() {
  unsigned M;
  unsigned N;
  unsigned minPrime = 0;
  unsigned sumPrime = 0;
  unsigned i;

  scanf("%u", &M);
  scanf("%u", &N);

  if (M < 2) {
    M = 2;
  }

  for (i = N; i >= M; i --) {
    if (isPrime(i)) {
      sumPrime += i;
      minPrime = i;
    }
  }

  if (sumPrime) {
    printf("%u\n", sumPrime);
    printf("%u\n", minPrime);
  } else {
    printf("-1\n");
  }

  return 0;
}

bool isPrime(unsigned n) {
  unsigned sqrt_n = sqrt(n);
  unsigned i;

  for (i = 2; i <= sqrt_n; i ++) {
    if (n % i == 0) {
      return false;
    }
  }

  return true;
}

