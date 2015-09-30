/*Write a program to 
Step1: Prompt the user to input an integer.
Step2: Read the integer.
Step3:Prompt the user to input another integer, greater than the first one.
Step4: Read the integer.
Step5:Print all integers numbers between the two read integers.
*/

#include<stdio.h>
int main()
{
	int num1,num2,counter;
	printf("Pleas input one integer:");
	scanf("%d",&num1);
	printf("Pleas input another integer greater than the first one:");
	scanf("%d",&num2);
	for(num1=num1;counter<=num2;counter++)
	{
		printf("%d,",counter);
	}	
	
	return 0;
}

