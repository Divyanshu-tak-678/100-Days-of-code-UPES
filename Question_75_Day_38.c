/*
 * UPES 100 Days of Code Challenge
 * Day 38 | Date: 16-September-2026
 * Section: 2D Arrays
 * 
 * Question 75:
 * Add two matrices.
 */

#include <stdio.h>
int main() {
    int r, c, a[10][10], b[10][10];
    scanf("%d %d", &r, &c);
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++) scanf("%d", &a[i][j]);
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++) scanf("%d", &b[i][j]);
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++) printf("%d ", a[i][j] + b[i][j]);
        printf("\n");
    }
    return 0;
}
