/*Write a program to accept two ages from Sara and Harry. Your program displays the ages.

Step 1: Define the data types
Step 2: Prompt the user to input their ages and then scanf the input
Step 3: Display their ages

*/

#include<stdio.h>
int main(){

	//Step1:
	int harry_age, sara_age;
	//Step 2:
	printf("Please input Sara's age:");
	scanf("%d",&sara_age);
	
	printf("Please input Harry's age:");
	scanf("%d",&harry_age);
	
	//Step 3:
	printf("Sara is %d and Harry is %d.\n",sara_age,harry_age);
	return 0;
}
