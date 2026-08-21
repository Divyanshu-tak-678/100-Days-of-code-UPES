#include <stdio.h>
int main(){
	float c;
	printf("Welcome to the temprature convertor, \n Please write the temprature in degree centigrate which you want to convert into  fahrenheit.");
	scanf("%f", &c);
	printf("The temprature in fahrenheit is = %f", (c*(9/5)+32));
	return 0;
}