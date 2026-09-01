/*
 * UPES 100 Days of Code Challenge
 * Day 23 | Date: 01-September-2026
 * Section: Nested Loops without Arrays/Strings
 * 
 * Question 46:
 * Write a program to print the following pattern:
*****
*****
*****
*****
*****
 */

#include <stdio.h>
int main() {
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++) printf("*");
        printf("\n");
    }
    return 0;
}
