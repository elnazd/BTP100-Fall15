/*Define an array of size 20.
Write a program to prompt 20 students to enter their grades. 
Save the grades in an array.
Display the grades.
*/
#include<stdio.h>
#define SIZE 20
void display(const int a[],int size);
int main()
{
	int grade[SIZE];
	int i;
	for(i=0;i<SIZE;i++)
	{
		printf("Please input your grade:");
		scanf("%d",&grade[i]);	
	}
	
	display(grade,SIZE);
}

void display(const int a[],int size)
{
	int i;
	for(i=0;i<size;i++)
		printf("%d\n",a[i]);
		

}
/*Write a function to find the student whose grade is 10.*/
int search(int g[],int size)
{


}

