/*
 * UPES 100 Days of Code Challenge
 * Day 21 | Date: 30-August-2026
 * Section: Loops without Arrays/Strings
 * 
 * Question 41:
 * Write a program to swap the first and last digit of a number.
 */

#include <stdio.h>
#include <math.h>
int main() {
    int n, first, last, digits, swapped;
    scanf("%d", &n);
    last = n % 10;
    digits = (int)log10(n);
    first = (int)(n / pow(10, digits));
    swapped = last;
    swapped *= (int)pow(10, digits);
    swapped += n % (int)pow(10, digits);
    swapped -= last;
    swapped += first;
    printf("%d\n", swapped);
    return 0;
}
