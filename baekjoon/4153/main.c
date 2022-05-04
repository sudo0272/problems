#include <stdio.h>

void swap(unsigned *, unsigned *);

int main() {
  unsigned a;
  unsigned b;
  unsigned c;

  while (scanf("%u %u %u", &a, &b, &c) && a != 0 && b != 0 && c != 0) {
    if (a > b) {
      swap(&a, &b);
    }

    if (b > c) {
      swap(&b, &c);
    }

    if (a > b) {
      swap(&a, &b);
    }

    if (a * a + b * b == c * c) {
      printf("right\n");
    } else {
      printf("wrong\n");
    }
  }

  return 0;
}

void swap(unsigned *a, unsigned *b) {
  unsigned temp = *a;
  *a = *b;
  *b = temp;
}

