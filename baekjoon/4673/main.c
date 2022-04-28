#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

unsigned getSelfNumber(unsigned);

int main() {
  bool hasGenerators[10001];
  unsigned i;
  unsigned j;

  memset(hasGenerators, false, 10001);

  for (i = 1; i <= 10000; i ++) {
    j = i;
    while ((j = getSelfNumber(j)) <= 10000) {
      hasGenerators[j] = true;
    }
  }

  for (i = 1; i <= 10000; i ++) {
    if (!hasGenerators[i]) {
      printf("%u\n", i);
    }
  }

  return 0;
}

unsigned getSelfNumber(unsigned n) {
  unsigned result = n;
  div_t t;

  while (n) {
    t = div(n, 10);

    result += t.rem;
    n = t.quot;
  }

  return result;
}

