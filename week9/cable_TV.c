#include <stdio.h>
 int findIndex(int TV[], int size, int station); 

// findIndex returns the index of the element that matches the
 // value received.
 
int findIndex(int TV[], int size, int station)
 { 
	//linear search
	int i,index;
	for(i=0;i<size;i++)
	{
		if(TV[i]==station)
			index = i;
				
	}
	
	return index;

 }
 
 
int main(void)
 {
//Define and initialize both TV and Cable arrays

	int TV[]={2,3,4,5,6,7,9,11,17,25,29,36};
	int cable[]={17,20,16,6,3,18,8,11,61,12,28,4};


//Prompt the user for a TV station number.
	int station;
	printf("Please enter a TV station number:");
	scanf("%d",&station);


//Call findIndex function and pass the arguments.Print the corresponding cable number.

	int index;
	index = findIndex(TV,12,station);

	printf("The corresponding cable number is:%d \n",cable[index]);

	return 0;

 }

