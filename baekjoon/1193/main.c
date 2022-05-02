#include <stdio.h>

int main() {
  unsigned i;
  unsigned X;

  scanf("%u", &X);

  i = 1;
  while (X > i) {
    X -= i ++;
  }

  if (i & 1) {
    printf("%u/%u\n", i - (X - 1), X);
  } else {
    printf("%u/%u\n", X, i - (X - 1));
  }

  return 0;
}

