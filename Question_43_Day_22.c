/*
 * UPES 100 Days of Code Challenge
 * Day 22 | Date: 31-August-2026
 * Section: Loops without Arrays/Strings
 * 
 * Question 43:
 * Write a program to check if a number is a strong number.
 */

#include <stdio.h>
int fact(int d) {
    int f = 1;
    for(int i = 1; i <= d; i++) f *= i;
    return f;
}
int main() {
    int n, num, sum = 0;
    scanf("%d", &n);
    num = n;
    while(num != 0) {
        sum += fact(num % 10);
        num /= 10;
    }
    if(sum == n) printf("Strong\n");
    else printf("Not Strong\n");
    return 0;
}
