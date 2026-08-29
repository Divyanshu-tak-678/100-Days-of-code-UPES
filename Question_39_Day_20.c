/*
 * UPES 100 Days of Code Challenge
 * Day 20 | Date: 29-August-2026
 * Section: Loops without Arrays/Strings
 * 
 * Question 39:
 * Write a program to find the product of odd digits of a number.
 */

#include <stdio.h>
int main() {
    int n, prod = 1, found = 0;
    scanf("%d", &n);
    while (n != 0) {
        int d = n % 10;
        if (d % 2 != 0) { prod *= d; found = 1; }
        n /= 10;
    }
    if (found) printf("%d\n", prod);
    else printf("0\n");
    return 0;
}
