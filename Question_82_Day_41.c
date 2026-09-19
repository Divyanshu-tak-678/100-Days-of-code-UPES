/*
 * UPES 100 Days of Code Challenge
 * Day 41 | Date: 19-September-2026
 * Section: Strings
 * 
 * Question 82:
 * Print each character of a string on a new line.
 */
#include <stdio.h>

int main() {
    char str[1000];
    if (fgets(str, sizeof(str), stdin) == NULL) return 0;
    for (int i = 0; str[i] != '\0' && str[i] != '\n' && str[i] != '\r'; i++) {
        printf("%c\n", str[i]);
    }
    return 0;
}
