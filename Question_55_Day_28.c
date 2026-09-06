/*
 * UPES 100 Days of Code Challenge
 * Day 28 | Date: 06-September-2026
 * Section: Nested Loops without Arrays/Strings
 * 
 * Question 55:
 * Write a program to print all the prime numbers from 1 to n.
 */

#include <stdio.h>
int main() {
    int n, i, j, flag;
    scanf("%d", &n);
    for(i=2; i<=n; i++) {
        flag = 1;
        for(j=2; j<=i/2; j++) {
            if(i%j==0) { flag = 0; break; }
        }
        if(flag) printf("%d ", i);
    }
    printf("\n");
    return 0;
}
