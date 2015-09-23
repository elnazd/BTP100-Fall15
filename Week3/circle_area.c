#include<stdio.h>
#define pi 3.14
int main(){

	float radius, area;

	//Prompt the user:
	printf("Please enter the radius:\n");
	scanf("%f",&radius);
	
	area = pi * radius * radius;
	
	printf("%.2f",area);
	return 0;
}
