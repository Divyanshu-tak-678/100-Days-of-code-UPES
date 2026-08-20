/*
 * UPES 100 Days of Code Challenge
 * Day 11 | Date: 20-August-2026
 * Section: Conditional Statements
 * 
 * Question 22:
 * Write a program to find profit or loss percentage given cost price and selling price.
 */

#include <stdio.h>

int main() {
    double c, s, diff, percentage;

    scanf("%lf %lf", &c, &s);

    if (s > c) {
        diff = s - c;
        percentage = (diff / c) * 100;
        printf("Profit %g%%\n", percentage);
    } else if (s < c) {
        diff = c - s;
        percentage = (diff / c) * 100;
        printf("Loss %g%%\n", percentage);
    } else {
        printf("No Profit No Loss\n");
    }

    return 0;
}
