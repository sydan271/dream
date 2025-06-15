
# I. Dream

**Time limit per test:** 1 second  
**Memory limit per test:** 256 megabytes

After the joy of solving the hardest problem, you fall into a dream?! You see a matrix full of `0`s, but your dream tells you there is exactly one `1`. Your mission is to find the position of that one `1` in order to escape the dream and return to reality.

In other words, you are given an `n x m` matrix (with `n` rows and `m` columns), which contains exactly one `1` and all other values are `0`. Your task is to find the position of the `1` in the form of `(row, column)`.

## Input

- The first line contains two positive integers `n` and `m` (`1 ≤ n, m ≤ 40`).
- Each of the next `n` lines contains `m` integers (either `0` or `1`), separated by spaces.

It's guaranteed that the matrix contains exactly one `1`.

## Output

- Output two integers — the row and column indices (1-based) of the number `1`.

Note: Rows are indexed from top to bottom, columns from left to right. See example below for clarification.

## Example

**Input**
```
4 5
0 0 0 0 0
0 0 0 0 0
0 0 0 1 0
0 0 0 0 0
```

**Output**
```
3 4
```
