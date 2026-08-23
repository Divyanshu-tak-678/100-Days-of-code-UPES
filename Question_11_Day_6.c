//Write a program to input an integer and check whether it is even or odd using if–else.
#include <stdio.h>

int main() {

	int a;

	printf("Please write the integer");
	scanf("%d", &a);

	if ((a%2) != 0){
		printf("%d is odd", a);
	}
	else {
		printf("%d is even", a);
	}

	return 0;
}