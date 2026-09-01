/*
 * UPES 100 Days of Code Challenge
 * Day 23 | Date: 01-September-2026
 * Section: Loops without Arrays/Strings
 * 
 * Question 45:
 * Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
 */

#include <stdio.h>
int main() {
    int n;
    float sum = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        sum += (float)(2*i) / (4*i - 1);
    }
    printf("%f\n", sum);
    return 0;
}
