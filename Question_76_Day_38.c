/*
 * UPES 100 Days of Code Challenge
 * Day 38 | Date: 16-September-2026
 * Section: 2D Arrays
 * 
 * Question 76:
 * Check if a matrix is symmetric.
 */

#include <stdio.h>
int main() {
    int r, c, a[10][10], sym = 1;
    scanf("%d %d", &r, &c);
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++) scanf("%d", &a[i][j]);
    if (r != c) sym = 0;
    else {
        for(int i=0; i<r; i++)
            for(int j=0; j<c; j++)
                if(a[i][j] != a[j][i]) sym = 0;
    }
    if(sym) printf("Symmetric\n");
    else printf("Not Symmetric\n");
    return 0;
}
