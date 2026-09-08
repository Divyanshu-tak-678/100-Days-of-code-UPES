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