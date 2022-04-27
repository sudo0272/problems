# PUŽ

## Problem
There is a snail on the ground. It wants to climb to the top of a wooden pole with the height of V meters, measuring from the ground level. In one day it can climb A meters upwards, however during each night it sleeps, sliding B meters back down. Determine the number of days it needs to climb to the top.

## Input
The first and only line of input contains three integers separated by a single space: A, B, and V (1 ≤ B < A ≤ V ≤ 1 000 000 000), with meanings described above.

## Output
The first and only line of output must contain the number of days that the snail needs to reach the top.

## Solution
<img src="./svgs/1d3836cacc2b21bed5c6b6a4c9307d90.svg?invert_in_darkmode" align=middle width=45.71340014999999pt height=22.465723500000017pt/> is how many the snail can climb upwards per day. <img src="./svgs/1a6b0eefbfc6ecf2238bbf7e7ffcda7c.svg?invert_in_darkmode" align=middle width=46.62663224999999pt height=22.465723500000017pt/> is how
many meters that the snail have to climb up without sliding down in the
last day. Thus, <img src="./svgs/c0115df4f654284a6acf84ea108332eb.svg?invert_in_darkmode" align=middle width=31.3603389pt height=28.670654099999997pt/> becomes how many days that the
snail have to climb up without sliding down in the last day. And if it
has a remainder, it means that there's one more day to climb up.
Consequently, how many days the snail have to climb up is
<img src="./svgs/e01ab5c1d0fb73993454b96da4d8c7ff.svg?invert_in_darkmode" align=middle width=49.91735429999999pt height=28.670654099999997pt/>.

