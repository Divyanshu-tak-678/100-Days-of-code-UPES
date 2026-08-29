/*
 * UPES 100 Days of Code Challenge
 * Day 20 | Date: 29-August-2026
 * Section: Loops without Arrays/Strings
 * 
 * Question 40:
 * Write a program to find the 1’s complement of a binary number and print it.
 */

#include <stdio.h>
#include <string.h>
int main() {
    char bin[100];
    scanf("%s", bin);
    for(int i = 0; i < strlen(bin); i++) {
        if(bin[i] == '0') printf("1");
        else if(bin[i] == '1') printf("0");
    }
    printf("\n");
    return 0;
}
