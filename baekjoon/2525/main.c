#include <stdio.h>
#include <stdlib.h>

int main() {
  unsigned int hour;
  unsigned int minute;
  unsigned int cookingMinute;
  div_t t;

  scanf("%u %u", &hour, &minute);
  scanf("%u", &cookingMinute);

  t = div(minute + cookingMinute, 60);

  hour = (hour + t.quot) % 24;
  minute = t.rem;

  printf("%u %u", hour, minute);

  return 0;
}

