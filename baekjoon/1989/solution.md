# Finding Prime Numbers

## Problem
  Write a code that counts and prints the number of prime numbers among N numbers.

### Input
  The number of numbers is given as N. N is less than or equal to 100. Then the N numbers are given and they are less than or equals to 1,000.

### Output
  Prints the number of prime numbers among given numbers.

## Solution
  First, get N. Then iterate N times getting and checking the if the given number is prime number. If it is, increase `primeNumbersCount` by 1.
  After constructing the main logic, I implemented a function that checks if a number is a prime number. The logic of `isPimeNumber()` works as following. It iterates `i` from 2 to square root of a number checking if the given number is diviable by `i`, which means the number is not a prime number.

