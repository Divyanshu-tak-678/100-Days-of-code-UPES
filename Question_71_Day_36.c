/*
 * UPES 100 Days of Code Challenge
 * Day 36 | Date: 14-September-2026
 * Section: 2D Arrays
 * 
 * Question 71:
 * Read and print a matrix.
 */

#include <stdio.h>
int main() {
    int r, c, a[10][10];
    scanf("%d %d", &r, &c);
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            scanf("%d", &a[i][j]);
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}
