//What is the output of this code?

#include <stdio.h>

int main()
{
	int a = 7;
	int b = 7;

	printf("%d\n%d\n%d\n%d\n%d\n%d\n", a==b, a!=b, a<b, a<=b, a>b, a>=b);
	
	/*
		1
		0
		0
		1
		0
		1	
	
	*/

	return 0;
}
