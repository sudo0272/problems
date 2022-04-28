#include <stdio.h>

int main() {
  char c;
  unsigned lowercaseCount = 0;
  unsigned uppercaseCount = 0;
  unsigned numberCount = 0;
  unsigned spaceCount = 0;

  while (scanf("%c", &c) != EOF) {
    if (c == '\n') {
      printf("%u %u %u %u\n", lowercaseCount, uppercaseCount, numberCount, spaceCount);
      lowercaseCount = uppercaseCount = numberCount = spaceCount = 0;
    } else if ('a' <= c && c <= 'z') {
      lowercaseCount ++;
    } else if ('A' <= c && c <= 'Z') {
      uppercaseCount ++;
    } else if ('0' <= c && c <= '9') {
      numberCount ++;
    } else {
      spaceCount ++;
    }
  }

  return 0;
}

