#include <stdio.h>

int main() {
  unsigned T;
  unsigned H;
  unsigned W;
  unsigned N;
  unsigned i;

  scanf("%u", &T);
  for (i = 0; i < T; i ++) {
    scanf("%u %u %u", &H, &W, &N);
    if (N % H) {
      printf("%u%02u\n", N % H, N / H + 1);
    } else {
      printf("%u%02u\n", H, N / H);
    }
  }

  return 0;
}

