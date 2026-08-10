/*
 * UPES 100 Days of Code Challenge
 * Day 01 | Date: 10-August-2026
 * Section: User Inputs, Operations & Output
 * 
 * Question 2:
 * Write a program to input two numbers and display their sum, difference, product, and quotient.
 */

#include <stdio.h>
int main(){
	
	int a,b;
	printf("Welcome to this summification software which adds 2 numbers. \n");

	printf("What is the first number?");
	scanf("%d", &a);

	printf("What is the second number?");
	scanf("%d", &b);

	printf("The sum = %d, dfference = %d, product = %d, quotient = %d of then selected numbers.", a+b, a-b, a*b, a/b );

	return 0;
}
