/*
 * UPES 100 Days of Code Challenge
 * Day 31 | Date: 09-September-2026
 * Section: Arrays (1D)
 * 
 * Question 61:
 * Search for an element in an array using linear search.
 */

#include <stdio.h>
int main() {
    int n, a[100], key, pos = -1;
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    scanf("%d", &key);
    for(int i=0; i<n; i++) {
        if(a[i] == key) { pos = i; break; }
    }
    if(pos != -1) printf("Found at index %d\n", pos);
    else printf("Not found\n");
    return 0;
}
