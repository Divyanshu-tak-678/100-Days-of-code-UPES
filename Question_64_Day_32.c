/*
 * UPES 100 Days of Code Challenge
 * Day 32 | Date: 10-September-2026
 * Section: Arrays (1D)
 * 
 * Question 64:
 * Find the digit that occurs the most times in an integer number.
 */

#include <stdio.h>
int main() {
    int n, count[10] = {0}, max_count = 0, max_digit = 0;
    scanf("%d", &n);
    if(n < 0) n = -n;
    if(n == 0) count[0] = 1;
    while(n > 0) { count[n%10]++; n /= 10; }
    for(int i=0; i<10; i++) {
        if(count[i] > max_count) { max_count = count[i]; max_digit = i; }
    }
    printf("%d\n", max_digit);
    return 0;
}
