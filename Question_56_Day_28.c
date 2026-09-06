/*
 * UPES 100 Days of Code Challenge
 * Day 28 | Date: 06-September-2026
 * Section: Arrays (1D)
 * 
 * Question 56:
 * Read and print elements of a one-dimensional array.
 */

#include <stdio.h>
int main() {
    int n, a[100];
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    for(int i=0; i<n; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
