#include <stdio.h>

int climbStairs(int n) {
  int previous = 1;
  int current = 2;
  int temp;
  int i;

  if (n == 1) {
    return 1;
  } else if (n == 2) {
    return 2;
  }

  for (i = 2; i < n; i ++) {
    temp = current;
    current += previous;
    previous = temp;
  }

  return current;
}

int main() {
  printf("%d\n", climbStairs(3));

  return 0;
}

