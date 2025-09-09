//swap two numbers (without using a temporary variable)
#include<stdio.h>

int main() {
//	declaring variables
	int a, b;
	
//	user input
	printf("Enter a value: ");
	scanf("%d",&a);
	printf("Enter b value: ");
	scanf("%d",&b);
	
//	swap
	/*a = a + b;
	b = a - b;
	a = a - b;*/
	
	a = a * b;
	b = a / b;
	a = a / b;
	
//	output
	printf("a value: %d",a);
	printf("\nb value: %d",b);
	return 0;
}
