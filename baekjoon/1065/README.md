# 1065. Hansu
[https://www.acmicpc.net/problem/1065](https://www.acmicpc.net/problem/1065)

## Problem
When each digit of X makes an arithmetic sequence, the number is called Hansu. An arithmetic sequence is a sequence that the difference between two consecutive numbers are identical. Given N, write a program that counts the number of Hansu in range from 1 to N.

### Input
An natural number N which is less than or equal to 1,000.

### Output
Prints the number of Hansu in range from 1 to N.

## Solution
Make a function `isHansu()` which checks if a number is a Hansu or not. Check if the numbers between 1 and N are Hansu or not using the function.

