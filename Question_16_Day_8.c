//Q16: Write a program to input three numbers and find the largest among them using if–else.

#include <stdio.h>
int main(){
	int num_1, num_2, num_3;
	printf("Enter 3 numbers adn this programme will output the largest of the 3");
	scanf("%d %d %d", &num_1, &num_2, &num_3);
	
	if (num_1 >= num_2 && num_1 >= num_3){
     printf("%d is the largest of the three", num_1);
    }
	else if (num_2 >= num_1 && num_2 >= num_3){
     printf("%d is the largest of the three", num_2);
	}
	else {
		printf("%d is the largest of the three", num_3);
	}
	return 0;
}