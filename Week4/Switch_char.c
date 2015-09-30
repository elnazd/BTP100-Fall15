/*Write a C program to prompt the user to select between two options ‘a’ or ‘b’. If option ‘a’ is selected, display “Program 1 is running!”. If option ‘b’ is selected, display “Program 2 is running!”. Here is a sample output:

Which option will you choose: a
Program 1 is running!
*/

#include<stdio.h>
int main()
{
	char option;
	printf("select between two options 'a' or 'b'");
	scanf("%c",&option);
	switch(option){
		case 'a':
			printf("Program 1 is running!");
			break;
		case 'b':
			printf("program 2 is running!");
			break;
		default:
			printf("Invalid input!");	
	}
	
	return 0;

}
