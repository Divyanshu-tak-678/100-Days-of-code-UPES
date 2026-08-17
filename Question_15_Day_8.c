/*
 * UPES 100 Days of Code Challenge
 * Day 08 | Date: 17-August-2026
 * Section: Conditional Statements
 * 
 * Question 15:
 * Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
 */

#include <stdio.h>

int main() {
    char input;
    printf("Please enter something and this programme will identify whether an Uppercase letter, a Lowercase letter, a number or a special character\n");
    scanf("%c", &input);
    
    if (input >= 48 && input <= 57) {
        printf("You have input a number.\n");
    }
    else if (input >= 65 && input <= 90) {
        printf("You have input an Uppercase letter\n");
    }
    else if (input >= 97 && input <= 122) {
        printf("You have input a Lowercase letter\n");
    }
    else {
        printf("You have input a special character\n");
    }
    
    return 0;
}
