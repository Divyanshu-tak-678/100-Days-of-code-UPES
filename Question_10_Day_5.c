//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>

int main() {
	float time;
	float min, hours;


	printf("Input your time in secconds.\n");
	scanf("%f", &time);

	min = time/60;
	hours = min/60;

	printf("The converted time is %f : %f : %f", hours, min, time);



	return 0;
}