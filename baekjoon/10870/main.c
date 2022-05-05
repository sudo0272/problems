#include <stdio.h>

unsigned fibonacci(n) {
  if (n == 0) {
    return 0;
  } else if (n <= 2) {
    return 1;
  }

  return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
  unsigned n;

  scanf("%u", &n);

  printf("%u\n", fibonacci(n));

  return 0;
}

