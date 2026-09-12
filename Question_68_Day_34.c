/*
 * UPES 100 Days of Code Challenge
 * Day 34 | Date: 12-September-2026
 * Section: Arrays (1D)
 * 
 * Question 68:
 * Delete an element from an array.
 */

#include <stdio.h>
int main() {
    int n, a[100], pos, i;
    scanf("%d", &n);
    for(i=0; i<n; i++) scanf("%d", &a[i]);
    scanf("%d", &pos);
    for(i = pos; i < n-1; i++) a[i] = a[i+1];
    n--;
    for(i=0; i<n; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
