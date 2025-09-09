//Area and Circumference of a circle
#include<stdio.h>

int main()
{
//	declaring variables
	float r,area,cir;
	
//	user input
	printf("Enter radius: ");
	scanf("%f",&r);
	
//	area and circumference
	area = 3.14 * r * r;
	cir = 2 * 3.14 * r;
	
//	output
	printf("Area: %f",area);
	printf("\nCircumference: %f",cir);
	
	return 0;
}
