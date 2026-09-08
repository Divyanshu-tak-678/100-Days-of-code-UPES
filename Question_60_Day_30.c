/*
 * UPES 100 Days of Code Challenge
 * Day 30 | Date: 08-September-2026
 * Section: Arrays (1D)
 * 
 * Question 60:
 * Count positive, negative, and zero elements in an array.
 */

#include <stdio.h>
int main() {
    int n, a[100], pos=0, neg=0, zero=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
        if(a[i]>0) pos++;
        else if(a[i]<0) neg++;
        else zero++;
    }
    printf("Positive: %d, Negative: %d, Zero: %d\n", pos, neg, zero);
    return 0;
}
