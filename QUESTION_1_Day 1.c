#include <stdio.h>
int main(){
	
	int a,b;
	printf("Welcome to this summification software which adds 2 numbers. \n");

	printf("What is the first number?");
	scanf("%d", &a);

	printf("What is the second number?");
	scanf("%d", &b);

	printf("The sum of then selected number is %d", a+b );

	return 0;
}