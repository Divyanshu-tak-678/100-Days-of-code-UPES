/*
 * UPES 100 Days of Code Challenge
 * Day 35 | Date: 13-September-2026
 * Section: Arrays (1D)
 * 
 * Question 69:
 * Find the second largest element in an array.
 */

#include <stdio.h>
int main() {
    int n, a[100], max1, max2;
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    max1 = max2 = -2147483648;
    for(int i=0; i<n; i++) {
        if(a[i] > max1) { max2 = max1; max1 = a[i]; }
        else if(a[i] > max2 && a[i] != max1) max2 = a[i];
    }
    printf("%d\n", max2);
    return 0;
}
