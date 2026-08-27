/*
 * UPES 100 Days of Code Challenge
 * Day 18 | Date: 27-August-2026
 * Section: Loops without Arrays/Strings
 * 
 * Question 35:
 * Write a program to print all factors of a given number.
 */

#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) printf("%d ", i);
    }
    printf("\n");
    return 0;
}
