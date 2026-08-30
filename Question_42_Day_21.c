/*
 * UPES 100 Days of Code Challenge
 * Day 21 | Date: 30-August-2026
 * Section: Loops without Arrays/Strings
 * 
 * Question 42:
 * Write a program to check if a number is a perfect number.
 */

#include <stdio.h>
int main() {
    int n, sum = 0;
    scanf("%d", &n);
    for(int i = 1; i < n; i++) {
        if(n % i == 0) sum += i;
    }
    if(sum == n) printf("Perfect\n");
    else printf("Not Perfect\n");
    return 0;
}
