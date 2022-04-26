#include <stdio.h>

unsigned int findClosestNthSum(source, left, right) {
  unsigned int middle = (left + right) / 2;
  double standard = (double) source / middle / 3;

  if (standard > middle - 1) {
    if (standard <= middle + 1) {
      return middle;
    } else {
      return findClosestNthSum(source, middle + 1, right);
    }
  } else {
    return findClosestNthSum(source, left, middle - 1);
  }
}

unsigned int findNthShell(source) {
  return source == 1 ? 1 : (findClosestNthSum(source - 1, 1, 44721) + 1);
}

int main() {
  unsigned int N;

  scanf("%u", &N);

  printf("%u", findNthShell(N));

  return 0;
}

