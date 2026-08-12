/*
 * UPES 100 Days of Code Challenge
 * Day 03 | Date: 12-August-2026
 * Section: User Inputs, Operations & Output
 * 
 * Question 5:
 * Write a program to convert temperature from Celsius to Fahrenheit.
 */

#include <stdio.h>
int main(){
	float c;
	printf("Welcome to the temprature convertor, \n Please write the temprature in degree centigrate which you want to convert into  fahrenheit.");
	scanf("%f", &c);
	printf("The temprature in fahrenheit is = %f", (c*(9/5)+32));
	return 0;
}
