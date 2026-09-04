/*
 * UPES 100 Days of Code Challenge
 * Day 26 | Date: 04-September-2026
 * Section: Nested Loops without Arrays/Strings
 * 
 * Question 52:
 * Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
 */

#include <stdio.h>
int main() {
    for(int i=1; i<=3; i++){
        for(int j=1; j<=i; j++) printf("*");
        printf("\n");
    }
    for(int i=2; i>=1; i--){
        for(int j=1; j<=i; j++) printf("*");
        printf("\n");
    }
    return 0;
}
