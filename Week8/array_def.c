//Initialize the grade array with the following values: 10,9,10,8,7,9,8,10

//Define the array. THink of type,size, and initial values of the array
#include<stdio.h>
#define SIZE 8
void display(int a[],int size);

int main()
{
	int grade[SIZE]={10,9,10,8,7,9,8,10};
	
	//Display all the elements of the array-Use a loop
	display(grade,SIZE);
}


//Write a function that takes an array of int and displays it.
void display(int a[],int size)
{
	int i;
	for(i=0;i<size;i++)
		printf("%d\n",a[i]);

}
