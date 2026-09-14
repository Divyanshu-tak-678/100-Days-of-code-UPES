/*
 * UPES 100 Days of Code Challenge
 * Day 36 | Date: 14-September-2026
 * Section: 2D Arrays
 * 
 * Question 72:
 * Find the sum of all elements in a matrix.
 */

#include <stdio.h>
int main() {
    int r, c, a[10][10], sum = 0;
    scanf("%d %d", &r, &c);
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++) {
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }
    printf("%d\n", sum);
    return 0;
}
