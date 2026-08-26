/*
 * UPES 100 Days of Code Challenge
 * Day 17 | Date: 26-August-2026
 * Section: Loops without Arrays/Strings
 * 
 * Question 33:
 * Write a program to check if a number is an Armstrong number.
 */

#include <stdio.h>
#include <math.h>
int main() {
    int n, num, rem, sum = 0, digits = 0;
    scanf("%d", &n);
    num = n;
    while(num != 0) { digits++; num /= 10; }
    num = n;
    while(num != 0) { rem = num % 10; sum += pow(rem, digits); num /= 10; }
    if(sum == n) printf("Armstrong\n");
    else printf("Not Armstrong\n");
    return 0;
}
