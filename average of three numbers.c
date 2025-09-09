//Average of three numbers
#include<stdio.h>

int main() {
//	declaring variables
	int num1, num2, num3, avg;
	
//	user input
	printf("Enter first number: ");
	scanf("%d",&num1);
	printf("Enter second number: ");
	scanf("%d",&num2);
	printf("Enter third number: ");
	scanf("%d",&num3);
	
//	average
	avg = (num1 + num2 + num3)/3;
	
//	output
	printf("Average: %d",avg);
	
	return 0;
}
