/*Write a program to accept employee ID from the user. Your program displays the employee ID.

Step 1: Define the data type
Step 2: Prompt the user to input their employee ID and then scanf the input
Step 3: Display the ID

*/

#include<stdio.h>
int main(){

	//Step1:
	int employee_id;
	//Step 2:
	printf("Please input your employee ID:");
	scanf("%d",&employee_id);
	
	//Step 3:
	printf("The employee ID is %d\n",employee_id);
	return 0;
}
