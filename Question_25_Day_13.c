/*
 * UPES 100 Days of Code Challenge
 * Day 13 | Date: 22-August-2026
 * Section: Conditional Statements
 * 
 * Question 25:
 * Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
 */

#include <stdio.h>

int main() {
    int a, b;
    char op;

    scanf("%d %d %c", &a, &b, &op);

    switch(op) {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
            printf("%d\n", a / b);
            break;
        case '%':
            printf("%d\n", a % b);
            break;
        default:
            break;
    }

    return 0;
}
