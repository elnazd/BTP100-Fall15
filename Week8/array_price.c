#include <stdio.h> 
#define SIZE 3
void displayList(double p[],int size) ;

int main(void) { 
	double price[SIZE]={10.60, 23.45, 5.89};
	displayList(price,SIZE); 
	return 0; 
} 

void displayList(double p[],int size) { 
	int i;
	for(i=0;i<size;i++)
	{
		printf("The price for item %d is %.2lf\n",i,p[i]);
	}
	//total:
	printf("The total price is %.2lf",p[0]+p[1]+p[2]);
} 

