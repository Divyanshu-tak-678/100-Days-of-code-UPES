/*
 * UPES 100 Days of Code Challenge
 * Day 18 | Date: 27-August-2026
 * Section: Loops without Arrays/Strings
 * 
 * Question 36:
 * Write a program to find the HCF (GCD) of two numbers.
 */

#include <stdio.h>
int main() {
    int n1, n2, i, gcd;
    scanf("%d %d", &n1, &n2);
    for(i=1; i <= n1 && i <= n2; ++i) {
        if(n1%i==0 && n2%i==0) gcd = i;
    }
    printf("%d\n", gcd);
    return 0;
}
