/*
 * UPES 100 Days of Code Challenge
 * Day 24 | Date: 02-September-2026
 * Section: Nested Loops without Arrays/Strings
 * 
 * Question 47:
 * Write a program to print the following pattern:
*
**
***
****
*****
 */

#include <stdio.h>
int main() {
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++) printf("*");
        printf("\n");
    }
    return 0;
}
