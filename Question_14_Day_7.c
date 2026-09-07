//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>

int main(){
	char vow;
	
	printf("This proigramme will check whether a character is a vowel or not.\n Enter the letter ;");
	scanf("%c", &vow);
	
	if(vow == 'a'|| vow == 'e'|| vow == 'i'|| vow == 'o' || vow == 'u' || vow == 'A' || vow == 'E' || vow == 'I' || vow == 'O' || vow == 'U'){
		printf("%c is a vowel", vow);
	}
	else {
		printf("%c is not a vowel", vow);
	}
	
	return 0;
}