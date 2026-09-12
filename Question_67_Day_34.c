/*
 * UPES 100 Days of Code Challenge
 * Day 34 | Date: 12-September-2026
 * Section: Arrays (1D)
 * 
 * Question 67:
 * Insert an element in an array at a given position.
 */

#include <stdio.h>
int main() {
    int n, a[100], val, pos, i;
    scanf("%d", &n);
    for(i=0; i<n; i++) scanf("%d", &a[i]);
    scanf("%d %d", &val, &pos);
    for(i = n-1; i >= pos; i--) a[i+1] = a[i];
    a[pos] = val;
    n++;
    for(i=0; i<n; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
