# PUŽ

## Problem
There is a snail on the ground. It wants to climb to the top of a wooden pole with the height of V meters, measuring from the ground level. In one day it can climb A meters upwards, however during each night it sleeps, sliding B meters back down. Determine the number of days it needs to climb to the top.

## Input
The first and only line of input contains three integers separated by a single space: A, B, and V (1 ≤ B < A ≤ V ≤ 1 000 000 000), with meanings described above.

## Output
The first and only line of output must contain the number of days that the snail needs to reach the top.

## Solution
$A - B$ is how many the snail can climb upwards per day. $V - B$ is how
many meters that the snail have to climb up without sliding down in the
last day. Thus, $\frac{V - B}{A - B}$ becomes how many days that the
snail have to climb up without sliding down in the last day. And if it
has a remainder, it means that there's one more day to climb up.
Consequently, how many days the snail have to climb up is
$\lceil \frac{V - B}{A - B} \rceil$.

