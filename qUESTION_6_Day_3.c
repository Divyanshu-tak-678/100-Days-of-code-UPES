/*
 * UPES 100 Days of Code Challenge
 * Day 03 | Date: 12-August-2026
 * Section: User Inputs, Operations & Output
 * 
 * Question 6:
 * Write a program to swap two numbers using a third variable.
 */

#include <stdio.h>
int main(){
	int a,b,c;
	
	printf("What are the numbers you want swapped?");
	scanf("%d %d", &a, &b);
	printf("The numbers you have selected are %d and %d", a, b  );
	c = a+b;
	a = c-a;
	b = c-b;
	
	printf("\nWhich have now been changed to %d and %d", a, b);
	
	return 0;
}
