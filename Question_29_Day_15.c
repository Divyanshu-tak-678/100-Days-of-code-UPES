/*
 * UPES 100 Days of Code Challenge
 * Day 15 | Date: 24-August-2026
 * Section: Loops without Arrays/Strings
 * 
 * Question 29:
 * Write a program to calculate the factorial of a number.
 */

#include <stdio.h>

int main() {
    int n, i;
    int fact = 1;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("%d\n", fact);

    return 0;
}
