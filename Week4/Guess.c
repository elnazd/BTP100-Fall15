/*Guessing game
Write a program to prompt the user to enter an integer value. Compare that integer value with 100. 
If the user’s guess is less than 100, print: “Sorry… Guess a larger number! Try again later!”. 
If the user’s guess is greater than 100, print: “Sorry… Guess a smaller number! Try again later!”. 
If the user’s guess is 100, print: “Correct!!”. */

#include<stdio.h>
int main()
{
	int num;
	printf("Please enter an integer value");
	scanf("%d",&num);
	
	if (num<100)
		printf("Sorry… Guess a larger number! Try again later!");
	else if (num>100)
			printf("Sorry… Guess a smaller number! Try again later!");
		 else if(num == 100)
				printf("Correct!");
		
	return 0;
	
}
