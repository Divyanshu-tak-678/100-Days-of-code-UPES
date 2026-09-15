/*
 * UPES 100 Days of Code Challenge
 * Day 37 | Date: 15-September-2026
 * Section: 2D Arrays
 * 
 * Question 73:
 * Find the sum of each row of a matrix and store it in an array.
 */

#include <stdio.h>
int main() {
    int r, c, a[10][10], sum[10] = {0};
    scanf("%d %d", &r, &c);
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) {
            scanf("%d", &a[i][j]);
            sum[i] += a[i][j];
        }
    }
    for(int i=0; i<r; i++) printf("%d ", sum[i]);
    printf("\n");
    return 0;
}
