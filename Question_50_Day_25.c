/*
 * UPES 100 Days of Code Challenge
 * Day 25 | Date: 03-September-2026
 * Section: Nested Loops without Arrays/Strings
 * 
 * Question 50:
 * Write a program to print the following pattern:
*****
 ****
  ***
   **
    *
 */

#include <stdio.h>
int main() {
    for(int i=5; i>=1; i--){
        for(int s=0; s<5-i; s++) printf(" ");
        for(int j=1; j<=i; j++) printf("*");
        printf("\n");
    }
    return 0;
}
