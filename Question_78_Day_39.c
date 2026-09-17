/*
 * UPES 100 Days of Code Challenge
 * Day 39 | Date: 17-September-2026
 * Section: 2D Arrays
 * 
 * Question 78:
 * Find the sum of main diagonal elements for a square matrix.
 */

#include <stdio.h>
int main() {
    int n, a[10][10], sum = 0;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            scanf("%d", &a[i][j]);
            if(i == j) sum += a[i][j];
        }
    }
    printf("%d\n", sum);
    return 0;
}
