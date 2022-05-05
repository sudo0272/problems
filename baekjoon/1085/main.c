#include <stdio.h>

int main() {
  unsigned x;
  unsigned y;
  unsigned w;
  unsigned h;
  unsigned distanceY;
  unsigned distanceX;

  scanf("%u %u %u %u", &x, &y, &w, &h);

  distanceY = y < (h - y) ? y : (h - y);
  distanceX = x < (w - x) ? x : (w - x);

  printf("%u", distanceY < distanceX ? distanceY : distanceX);

  return 0;
}

