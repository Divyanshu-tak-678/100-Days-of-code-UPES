/*
 * UPES 100 Days of Code Challenge
 * Day 04 | Date: 13-August-2026
 * Section: User Inputs, Operations & Output
 * 
 * Question 7:
 * Write a program to swap two numbers without using a third variable.
 */

#include <stdio.h>
int main(){
	int a,b;
	
	printf("What are the numbers you want swapped?");
	scanf("%d %d", &a, &b);
	printf("The numbers you have selected are %d and %d", a, b  );

	b = a+b;
	a = b-a;
	b = b-a;
	
	printf("\nWhich have now been changed to %d and %d", a, b);

	return 0;
}
