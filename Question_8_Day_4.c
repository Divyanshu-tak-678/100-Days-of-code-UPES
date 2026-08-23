//Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>

int main() {
    int n, i, sum;
    sum = 0;
    i = 1;
   
    printf("Enter a positive number n: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("you have not entered a positive number, please enter a positive number.\n");
    } else {

        while (i <= n) {
            sum = sum + i;
            i = i + 1;
        }

       
        printf("The sum of the first %d natural numbers = %d\n", n, sum);
    }

    return 0;
}