/*
Define an array of size four, call it price and initialize it with these values: {12.34, 7.89, 6.56, 9.32}
Print all the elements of the array. 
*/
#include<stdio.h>
#define SIZE 4
void display(double a[],int size);

int main()
{
	double price[SIZE]={12.34, 7.89, 6.56, 9.32};
	int sku[SIZE]={2156, 4633, 3122, 5611};
	int tax[SIZE]={1,0,0,1};
	/*Print the elements of both arrays in an informative form.*/
	int i;
	for(i=0;i<SIZE;i++)
		printf("Item %d is $%.2lf.\n",sku[i],price[i]);
	
	/*A customer buys one of each product.
    Calculate the total purchase price, plus 0.13 HST.
	Some products do not attract tax.
Calculate the total purchase price, assuming that products with sku numbers 4633 and 3122 do not attract tax.
    */
	double total_price=0;
	for(i=0;i<SIZE;i++)
		total_price= total_price + price[i] + price[i]*tax[i]*0.13;
	
	
	/*
	solution 2:
	double total_price=0;
	for(i=0;i<SIZE;i++)
	{
		if(sku[i]==2156 || sku[i]==5611)
			total_price = total_price + price[i] + price[i]*0.13;
		else
			total_price = total_price + price[i];
		
	}
	*/

		
		
		
	
	display(price, SIZE);
}
//This function takes an array and size of the array as input and displays the array
void display(double a[],int size)
{
	int i;
	for(i=0;i<size;i++)
		printf("%.2lf\n",a[i]);
}
