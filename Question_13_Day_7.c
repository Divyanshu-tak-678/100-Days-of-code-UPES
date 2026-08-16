/*
 * UPES 100 Days of Code Challenge
 * Day 07 | Date: 16-August-2026
 * Section: Conditional Statements
 * 
 * Question 13:
 * Write a program to input a year and check whether it is a leap year or not using conditional statements.
 */

#include <stdio.h>

int main(){
	int year;

 printf("This is a leap year checker. Input the year you want to check ; ");
 scanf('%d', &year);

 if (year%4 == 0 && year%100 != 0 || year%400 == 0){
 	printf("yes its a leap year.");
 }
 else {
 	printf("No it's not a leap year.");
 }
	return 0;
}
