/*
 * UPES 100 Days of Code Challenge
 * Day 39 | Date: 17-September-2026
 * Section: 2D Arrays
 * 
 * Question 77:
 * Check if the elements on the diagonal of a matrix are distinct.
 */

#include <stdio.h>
int main() {
    int n, a[10][10], dist = 1;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++) scanf("%d", &a[i][j]);
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(a[i][i] == a[j][j]) dist = 0;
        }
    }
    if(dist) printf("Distinct\n");
    else printf("Not Distinct\n");
    return 0;
}
