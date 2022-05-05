#define PI 3.14159265358979323846

#include <stdio.h>

int main() {
  unsigned R;

  scanf("%u", &R);

  printf("%lf\n", PI * R * R);
  printf("%lf\n", 2.0 * R * R);

  return 0;
}

