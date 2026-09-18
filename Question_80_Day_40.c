/*
 * UPES 100 Days of Code Challenge
 * Day 40 | Date: 18-September-2026
 * Section: 2D Arrays
 * 
 * Question 80:
 * Multiply two matrices.
 */

#include <stdio.h>
int main() {
    int r1, c1, r2, c2, a[10][10], b[10][10], res[10][10];
    scanf("%d %d", &r1, &c1);
    for(int i=0; i<r1; i++)
        for(int j=0; j<c1; j++) scanf("%d", &a[i][j]);
    scanf("%d %d", &r2, &c2);
    for(int i=0; i<r2; i++)
        for(int j=0; j<c2; j++) scanf("%d", &b[i][j]);
    if(c1 != r2) { printf("Not possible\n"); return 0; }
    for(int i=0; i<r1; i++) {
        for(int j=0; j<c2; j++) {
            res[i][j] = 0;
            for(int k=0; k<c1; k++) res[i][j] += a[i][k] * b[k][j];
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}
