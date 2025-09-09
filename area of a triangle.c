//Area of a triangle
#include<stdio.h>

int main()
{
//	declaring variables
	float b, h, areaOfTriangle;
	
//	user input
	printf("Enter base: ");
	scanf("%f",&b);
	printf("Enter height: ");
	scanf("%f",&h);
	
//	formula of area of triangle
	areaOfTriangle = (b * h)/2;
	
//	output
	printf("Area of triangle: %f",areaOfTriangle);
	
	return 0;
}
