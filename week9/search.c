#include<stdio.h>
#define SIZE 5
void search(int a[],int value);

int main(void) 
{ 	int i, item; 
	int grade[] = {20,10,3,7,22}; 
	search(grade, 7); 
	return 0; 
}
//this function takes an array and its size and 
//prints the index that holds value 7.
void search(int a[],int value)
{
	int i;
	int found=0;
	for(i=0;i<SIZE && found==0;i++)
	{
		if(a[i]==value){
			printf("The item is stored in index: %d\n",i);
			found=1;//The value is found
		}
	}
	if(found==0)
		printf("The value is not found!");
}
