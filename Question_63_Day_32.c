/*
 * UPES 100 Days of Code Challenge
 * Day 32 | Date: 10-September-2026
 * Section: Arrays (1D)
 * 
 * Question 63:
 * Merge two arrays.
 */

#include <stdio.h>
int main() {
    int n1, n2, a[100], b[100], c[200];
    scanf("%d", &n1);
    for(int i=0; i<n1; i++) { scanf("%d", &a[i]); c[i] = a[i]; }
    scanf("%d", &n2);
    for(int i=0; i<n2; i++) { scanf("%d", &b[i]); c[n1+i] = b[i]; }
    for(int i=0; i<n1+n2; i++) printf("%d ", c[i]);
    printf("\n");
    return 0;
}
