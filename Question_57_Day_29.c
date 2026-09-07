/*
 * UPES 100 Days of Code Challenge
 * Day 29 | Date: 07-September-2026
 * Section: Arrays (1D)
 * 
 * Question 57:
 * Find the sum of array elements.
 */

#include <stdio.h>
int main() {
    int n, a[100], sum=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("%d\n", sum);
    return 0;
}
