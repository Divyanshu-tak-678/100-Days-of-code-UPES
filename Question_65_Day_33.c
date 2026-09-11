/*
 * UPES 100 Days of Code Challenge
 * Day 33 | Date: 11-September-2026
 * Section: Arrays (1D)
 * 
 * Question 65:
 * Search in a sorted array using binary search.
 */

#include <stdio.h>
int main() {
    int n, a[100], key, low, high, mid, pos = -1;
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    scanf("%d", &key);
    low = 0; high = n - 1;
    while(low <= high) {
        mid = (low + high) / 2;
        if(a[mid] == key) { pos = mid; break; }
        else if(a[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    if(pos != -1) printf("Found at index %d\n", pos);
    else printf("Not found\n");
    return 0;
}
