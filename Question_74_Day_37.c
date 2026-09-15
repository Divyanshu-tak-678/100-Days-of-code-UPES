/*
 * UPES 100 Days of Code Challenge
 * Day 37 | Date: 15-September-2026
 * Section: 2D Arrays
 * 
 * Question 74:
 * Find the transpose of a matrix.
 */

#include <stdio.h>
int main() {
    int r, c, a[10][10];
    scanf("%d %d", &r, &c);
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            scanf("%d", &a[i][j]);
    for(int i=0; i<c; i++) {
        for(int j=0; j<r; j++) printf("%d ", a[j][i]);
        printf("\n");
    }
    return 0;
}
