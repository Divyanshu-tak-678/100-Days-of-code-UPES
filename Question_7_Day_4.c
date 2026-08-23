//Write a program to swap two numbers without using a third variable.
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