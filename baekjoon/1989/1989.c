#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

bool isPrimeNumber(unsigned int n) {
  unsigned int sqrtN = sqrt(n);
  unsigned int i;

  if (n <= 1) {
    return false;
  }

  for (i = 2; i <= sqrtN; i ++) {
    if (n % i == 0) {
      return false;
    }
  }

  return true;
}

int main() {
  unsigned int N;
  unsigned int number;
  unsigned int primeNumbersCount = 0;
  unsigned int i;

  scanf("%u", &N);

  for (i = 0; i < N; i ++) {
    scanf("%u", &number);

    if (isPrimeNumber(number)) {
      primeNumbersCount ++;
    }
  }

  printf("%u", primeNumbersCount);
}

