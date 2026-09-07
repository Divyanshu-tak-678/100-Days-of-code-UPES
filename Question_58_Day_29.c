/*
 * UPES 100 Days of Code Challenge
 * Day 29 | Date: 07-September-2026
 * Section: Arrays (1D)
 * 
 * Question 58:
 * Find the maximum and minimum element in an array.
 */

#include <stdio.h>
int main() {
    int n, a[100], max, min;
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    max = min = a[0];
    for(int i=1; i<n; i++) {
        if(a[i] > max) max = a[i];
        if(a[i] < min) min = a[i];
    }
    printf("Max: %d, Min: %d\n", max, min);
    return 0;
}
