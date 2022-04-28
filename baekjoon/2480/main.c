#include <stdio.h>

void swap(unsigned *, unsigned *);

int main() {
  unsigned a, b, c;

  scanf("%u %u %u", &a, &b, &c);

  if (a > b) {
    swap(&a, &b);
  }

  if (a > c) {
    swap(&a, &c);
  }

  if (b > c) {
    swap(&b, &c);
  }

  if (a == c) {
    printf("%u", 10000 + a * 1000);
  } else if (a == b || b == c) {
    printf("%u", 1000 + b * 100);
  } else {
    printf("%u", c * 100);
  }
}

void swap(unsigned *a, unsigned *b) {
  unsigned temp = *a;
  *a = *b;
  *b = temp;
}

