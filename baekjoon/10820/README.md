# 10820. Analyze Strign

## Problem
N strings are given. Write a program that counts each of the numbers of lowercase alphabets, uppercase alphabets, numbers and spaces in the string. Each string are composed only with lowercase alphabets, uppercase alphabets, numbers and spaces.

### Input
Strings are given from first line to Nth line. (1 ≤ N ≤ 100). The length of the string does not exceed 100.

### Output
Prints the number of lowercase alphabets, uppercase alphabets, numbers and spaces separating with spaces for each string from first line to Nth line.

## Solution
Gets a character until EOF is found. And increase the count depending on the character. When a newline character is found, prints the counts and reset them to 0.

