/*
 * UPES 100 Days of Code Challenge
 * Day 16 | Date: 25-August-2026
 * Section: Loops without Arrays/Strings
 * 
 * Question 32:
 * Write a program to check if a number is a palindrome.
 */

#include <stdio.h>
int main() {
    int n, num, rev = 0;
    scanf("%d", &n);
    num = n;
    while(n > 0) { rev = rev * 10 + n % 10; n /= 10; }
    if (num == rev) printf("Palindrome\n");
    else printf("Not Palindrome\n");
    return 0;
}
