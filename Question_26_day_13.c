/*
 * UPES 100 Days of Code Challenge
 * Day 13 | Date: 22-August-2026
 * Section: Loops without Arrays/Strings
 * 
 * Question 26:
 * Write a program to print numbers from 1 to n.
 */

#include <stdio.h>

int main() {
    int n, i;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
