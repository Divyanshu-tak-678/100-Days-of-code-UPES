/*
 * UPES 100 Days of Code Challenge
 * Day 26 | Date: 04-September-2026
 * Section: Nested Loops without Arrays/Strings
 * 
 * Question 51:
 * Write a program to print the following pattern:
    5
   45
  345
 2345
12345
 */

#include <stdio.h>
int main() {
    for(int i=5; i>=1; i--){
        for(int s=0; s<5-i; s++) printf(" ");
        for(int j=i; j<=5; j++) printf("%d", j);
        printf("\n");
    }
    return 0;
}
