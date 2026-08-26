/*
 * UPES 100 Days of Code Challenge
 * Day 17 | Date: 26-August-2026
 * Section: Loops without Arrays/Strings
 * 
 * Question 34:
 * Write a program to check if a number is prime.
 */

#include <stdio.h>
int main() {
    int n, i, flag = 1;
    scanf("%d", &n);
    if(n <= 1) flag = 0;
    for(i = 2; i <= n/2; ++i) {
        if(n % i == 0) { flag = 0; break; }
    }
    if(flag) printf("Prime\n");
    else printf("Not Prime\n");
    return 0;
}
