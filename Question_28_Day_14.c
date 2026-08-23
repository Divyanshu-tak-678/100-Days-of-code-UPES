/*
 * UPES 100 Days of Code Challenge
 * Day 14 | Date: 23-August-2026
 * Section: Loops without Arrays/Strings
 * 
 * Question 28:
 * Write a program to print the product of even numbers from 1 to n.
 */

#include <stdio.h>

int main() {
    int n, i;
    int product = 1;

    scanf("%d", &n);

    for (i = 2; i <= n; i += 2) {
        product *= i;
    }

    printf("%d\n", product);

    return 0;
}
