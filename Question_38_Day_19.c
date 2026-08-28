/*
 * UPES 100 Days of Code Challenge
 * Day 19 | Date: 28-August-2026
 * Section: Loops without Arrays/Strings
 * 
 * Question 38:
 * Write a program to find the sum of digits of a number.
 */

#include <stdio.h>
int main() {
    int n, sum = 0;
    scanf("%d", &n);
    while (n != 0) { sum += n % 10; n /= 10; }
    printf("%d\n", sum);
    return 0;
}
