/*
 * UPES 100 Days of Code Challenge
 * Day 40 | Date: 18-September-2026
 * Section: 2D Arrays
 * 
 * Question 79:
 * Perform diagonal traversal of a matrix.
 */

#include <stdio.h>
int main() {
    int r, c, a[10][10];
    scanf("%d %d", &r, &c);
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++) scanf("%d", &a[i][j]);
    for(int k=0; k<=r+c-2; k++) {
        for(int j=0; j<=k; j++) {
            int i = k - j;
            if(i < r && j < c) printf("%d ", a[i][j]);
        }
    }
    printf("\n");
    return 0;
}
