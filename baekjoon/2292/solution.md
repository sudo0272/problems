# 2292. Beehive

## Problem
![beehive](./problem.png)
  There's a beehive formed with hexagons as seen above. As seen in the picture, the rooms are addressed from the center room 1, to nearby rooms increasing room number. There's a beehive formed with hexagons as seen above. As seen in the picture, the addressment of rooms starts from the room 1 in the center, each nearby rooms are addressed with increased room number. Write a program that calculates the minimum number of rooms passed through to go to Nth room. For example, 3 rooms are passed through to go to 13th room and 5 rooms are passed through to go to 58th room.

### Input
  N (1 ≤ N ≤ 1,000,000,000) is given.

### Output
  Prints the minimum number of rooms passed through to go to Nth room.

## Solution

### Solution 1
  The greatest number of the room of each shell G are following: 7, 19, 37, 61, .... And G - 1 are following: 6, 18, 36, 60, .... (G - 1) / 6 are following: 1, 3, 6, 10, .... And they are equal to Σ(1), Σ(1~2), Σ(1~3), Σ(1~4), ....
  Say x is the given number and m is the minimum number of rooms passed through. Then, m satisfies following: Σ(1~(m-1)) < x ≤ Σ(1~m), 6m(m-1)/2 < x ≤ 6m(m+1)/2, 3m(m-1) < x ≤ 3m(m+1), m-1 < x/3m ≤ m+1. `findNthShell()` calls `findClosestNthSum()` internally and returns m using binary search.
  In addition, 44721 is 44722-1 and 44722 is the maximum value of m since N is less than or equal to 1000000000.

### Solution 2
  The greatest number of the room of each shell G are following: 7, 19, 37, 61, .... And the differences between them are 6, 12, 18, ... which can be generalized to 6G. Thus the number m, the minimum number of rooms passed through, satisfies following: 6Σ(1~m) < N.

