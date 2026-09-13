/*
 * UPES 100 Days of Code Challenge
 * Day 35 | Date: 13-September-2026
 * Section: Arrays (1D)
 * 
 * Question 70:
 * Rotate an array to the right by k positions.
 */

#include <stdio.h>
int main() {
    int n, a[100], k, temp[100];
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    scanf("%d", &k);
    k = k % n;
    for(int i=0; i<n; i++) temp[(i+k)%n] = a[i];
    for(int i=0; i<n; i++) printf("%d ", temp[i]);
    printf("\n");
    return 0;
}
