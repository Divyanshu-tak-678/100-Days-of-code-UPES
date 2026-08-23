//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>

int main() {

	int principal;
	float rate, time, simple , compound;

	printf("What is the principal amount ?\n");
	scanf("%d",  &principal);

	printf("What is the rate of interest?\n");
	scanf("%f", &rate);

	printf("What is the time period for the loan? (should be given in years)\n");
	scanf("%f", &time);

	simple = ((principal*rate*time)/100);
	compound = principal * (pow((1 + rate / 100.0), time) - 1);  

	printf("Simple interest = %f , Compound interest = %f",simple , compound );

	return 0;
}