//Sum of two numbers
#include<stdio.h>

int main() {
//	declaring variables
	int firstNumber, secondNumber, sum;
	
//	user input
	printf("Enter first number: ");
	scanf("%d",&firstNumber);
	printf("Enter second number: ");
	scanf("%d",&secondNumber);
	
//	operation
	sum = firstNumber + secondNumber;
	
//	output
	printf("Sum: %d",sum);
	
	return 0;
}
