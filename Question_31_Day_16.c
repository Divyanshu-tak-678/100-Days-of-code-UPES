/*
 * UPES 100 Days of Code Challenge
 * Day 16 | Date: 25-August-2026
 * Section: Loops without Arrays/Strings
 * 
 * Question 31:
 * Write a program to take a number as input and print its equivalent binary representation.
 */

#include <stdio.h>
int main() {
    int n, bin[32], i = 0;
    scanf("%d", &n);
    if (n == 0) { printf("0\n"); return 0; }
    while (n > 0) { bin[i++] = n % 2; n /= 2; }
    for (int j = i - 1; j >= 0; j--) printf("%d", bin[j]);
    printf("\n");
    return 0;
}
