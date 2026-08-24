/*
 * UPES 100 Days of Code Challenge
 * Day 15 | Date: 24-August-2026
 * Section: Loops without Arrays/Strings
 * 
 * Question 30:
 * Write a program to reverse a given number.
 */

#include <stdio.h>

int main() {
    int n, reversed = 0;

    scanf("%d", &n);

    while (n != 0) {
        int remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    printf("%d\n", reversed);

    return 0;
}
