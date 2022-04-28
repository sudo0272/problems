# Cooking Clock

## Problem
KOI Electronics is trying to develop an AI oven that can cook healthy and delicious smoked duck easily. To use the oven, the only step is to put enough amount of ingredients for smoked duck to the AI oven. Then it calculates when the cooking finishes automatically in minutes.
Also, it has a digital clock that notifies when the cooking finishes to user on the front side.
When the time when the cooking begins and the time to cook in minutes are given, write a program that calculates when the cooking finishes.

### Input
Current time appears in the first line. It is given with hour A (0 ≤ A ≤ 23) and minute B (0 ≤ B ≤ 59) separating by a space. The time to cook C (0 ≤ C ≤ 1,000) is given in minute in the second line.

### Output
Prints hour and minute of when the cooking ends separating by a space. (Hour is an integer in range from 0 to 23, and minute is an integer in range from 0 to 59. When one minute passes from 23:59, the time becomes 00:00 in digital clock.)

## Solution
The quotient of minutes and 60 is hours. The remainder of hours and 24 gives hours in range from 0 and 23. And the remainder of minutes and 60 gives minutes in range from 0 to 59.

