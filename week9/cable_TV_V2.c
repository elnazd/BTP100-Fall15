#include <stdio.h>
 int findIndex(int TV[], int size, int station); 

// findIndex returns the index of the element that matches the
 // value received.
 
 //if the item is not found return -1
 
int findIndex(int TV[], int size, int station)
 { 

	int i;
	int index;
	int found=0;//Nothing is found
	
	for(i=0;i<size && found!=1;i++)
	{
		if(TV[i] == station)
		{
			index = i;
			found = 1; //station is found
		}
	}

	if(found == 0)
		return -1;
	else 
		return index;

 }
 
 int main(void)
 {
//Define and initialize both TV and Cable arrays

	int TV[12]={2,3,4,5,6,7,9,11,17,25,29,36};
	int Cable[12]={17,20,16,6,3,18,8,11,61,12,28,4};

//Prompt the user for a TV station number.
	int station;
	printf("Please enter a TV station number:");
	scanf("%d",&station);

//Call findIndex function and pass the arguments. This function returns the index of the station number that matches the
// value received. If the item is not found return -1. Print the corresponding cable number.

	int index;
	index = findIndex(TV,12,station);

	if(index != -1)
		printf("The corresponding cable number is:%d",Cable[index]);
	else
		printf("The item is not found!");

return 0;

 }

