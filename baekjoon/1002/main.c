#include <stdio.h>
#include <math.h>

typedef struct {
  int x;
  int y;
  int r;
} Turret;

int main() {
  Turret joe;
  Turret baek;
  unsigned T;
  unsigned i;
  unsigned r2;
  unsigned distance2;
  unsigned joeBaekR2;

  scanf("%u", &T);

  for (i = 0; i < T; i ++) {
    scanf("%d %d %u %d %d %u", &joe.x, &joe.y, &joe.r, &baek.x, &baek.y, &baek.r);

    if (joe.x == baek.x && joe.y == baek.y && joe.r == baek.r) {
      printf("-1\n");
      continue;
    }

    r2 = pow(joe.r + baek.r, 2);
    distance2 = pow(joe.x - baek.x, 2) + pow(joe.y - baek.y, 2);
    joeBaekR2 = pow(joe.r - baek.r, 2) ;

    /* printf("%u %u %u\n", r2, distance2, joeBaekR2); */

    if (r2 < distance2 || distance2 < joeBaekR2) {
      printf("0\n");
    } else if (r2 == distance2 || distance2 == joeBaekR2) {
      printf("1\n");
    } else {
      printf("2\n");
    }
  }

  return 0;
}

