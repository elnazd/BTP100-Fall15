/*Write a complete C program that does the following:

A.	Prompts the user to enter an Ontarian postal code that is a string of no more than 6 characters (excluding null terminator) and accepts the userâ€™s input. 
B.	Validates the postal code. An Ontarian postal code consists of exactly 6 characters: the first, third and fifth are alphabetic, while the second, fourth and sixth are numeric. If the postal code is invalid, your program displays an error message and asks the user to enter a new string.
C.	After your program has validated the input string, your program examines the first character of the postal code and accordingly determines the region within the province of Ontario. For example, the postal code starting with â€˜Kâ€™ refers to eastern Ontario.*/

/*A.	Prompts the user to enter an Ontarian postal code that is a string of no more than 6 characters (excluding null terminator) and accepts the userâ€™s input.
*/

#include<stdio.h>
#include<string.h>
#define SIZE 6+1
int validate(char code[]);
int main()
{
	char code[SIZE];
	int valid;
	printf("Enter an Ontarian postal code (with no spaces and all the letters capitalized):");

	do{
		scanf("%s",code);
		valid=validate(code);
		if(valid==0)
			printf("Error: enter a valid postal code!\n");
	}while(valid!=1);
	
	/*
	C.	After your program has validated the input string, your program examines the first character of the postal code and accordingly determines the region within the province of Ontario. For example, the postal code starting with â€˜Kâ€™ refers to eastern Ontario.*/
	
	switch(code[0])
	{
		case 'K':
			printf("This postal code is located at Eastern Ontario.\n");
			break;
		case 'L':
			printf("This postal code is located at Central Ontario.\n");
			break;
		case 'M':
			printf("This postal code is located at Toronto.\n");
			break;
		case 'N':
			printf("This postal code is located at Western Ontario.\n");
			break;
			printf("This postal code is located at Northern Ontario.\n");
			break;
		default:
			printf("The postal code is not located in Ontario.\n");		
	}
	
	return 0;
	
}

/*
Validates the postal code. An Ontarian postal code consists of exactly 6 characters: the first, third and fifth are alphabetic, while the second, fourth and sixth are numeric. If the postal code is invalid, your program displays an error message and asks the user to enter a new string.

//the validate function returns 1 if the postal code is valid, 0 otherwise.
*/

int validate(char code[])
{
	int ok=1;//The postal code is valid by default
	
	//check the length
	if(strlen(code)!=6)
		ok=0;
	
	//the first, third and fifth elements are alphabetic
	//The elements are invalid, if they are not between A and Z
	if('A'> code[0] || code[0] > 'Z' || 
	'A'> code[2] || code[2] > 'Z' || 
	'A'> code[4] || code[4] > 'Z')
	{
		ok=0;
	}
	
	//The second, fourth and sixth elements are numeric.
	//The elements are invalid, if they are not between 0 and 9
	if('0'> code[1] || code[1] > '9' || 
	'0'> code[3] || code[3] > '9' || 
	'0'> code[5] || code[5] > '9')
	{
		ok=0;
	}
	
	return ok;
	
}


