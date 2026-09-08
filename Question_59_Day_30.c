/*
 * UPES 100 Days of Code Challenge
 * Day 30 | Date: 08-September-2026
 * Section: Arrays (1D)
 * 
 * Question 59:
 * Count even and odd numbers in an array.
 */

#include <stdio.h>
int main() {
    int n, a[100], even=0, odd=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
        if(a[i]%2==0) even++;
        else odd++;
    }
    printf("Even: %d, Odd: %d\n", even, odd);
    return 0;
}
