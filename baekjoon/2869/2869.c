#include <stdio.h>
#include <math.h>

int main() {
  unsigned A;
  unsigned B;
  unsigned V;

  scanf("%u %u %u", &A, &B, &V);

  printf("%u", (unsigned int) ceil(((double) (V - B)) / (A - B)));

  return 0;
}

