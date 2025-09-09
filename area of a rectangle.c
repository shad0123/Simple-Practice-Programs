//Area of a rectangle
#include<stdio.h>

int main()
{
//	declaring variables
	int l, b, A;
	
//	user input
	printf("Enter length: ");
	scanf("%d",&l);
	printf("Enter breadth: ");
	scanf("%d",&b);
	
//	area
	A = l * b;
	
//	output
	printf("Area of rectangle: %d",A);
	
	return 0;
}
