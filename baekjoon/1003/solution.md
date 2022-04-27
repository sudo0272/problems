# Fibonacci Function

## Problem
The source code below is a C++ function that finds Nth Fibonacci number.
```
int fibonacci(int n) {
  if (n == 0) {
    printf("0");
    return 0;
  } else if (n == 1) {
    printf("1");
    return 1;
  } else {
    return fibonacci(n‐1) + fibonacci(n‐2);
  }
}
```

When `fibonacci(3)` is called, followings are caused:
- `fibonacci(3)` calls `fibonacci(2)` and `fibonacci(1)` (first call).
- `fibonacci(2)` calls `fibonacci(1)` (second call) and `fibonacci(0)`.
- Second-called fibonacci(1) prints `1` and returns `1`.
- `fibonacci(0)` prints `0` and returns `0`.
- `fibonacci(2)` gets the result of `fibonacci(1)` and `fibonacci(0)`,
  and returns `1`.
- First-called `fibonacci(1)` prints `1` and returns `1`.
- `fibonacci(3)` gets the result of `fibonacci(2)` and `fibonacci(1)`,
  and returns `2`.
`1` is printed twice and `0` is printed once. When N is given and called
`fibonacci(N)`, write a program that finds how many 0 and 1 are printed
for each.

## Solution
Let `f(x)` calculates nth number of Fibonacci series. Then the numbers of
how many 0 and 1 are printed are `f(x - 1)` and `f(x)` for each. The
code just calculates Fibonacci series.

