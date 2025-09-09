//swap two numbers (using a temporary variable)
#include<stdio.h>

int main() {
	int a, b, c;
	
	printf("Enter a value: ");
	scanf("%d",&a);
	printf("Enter b value: ");
	scanf("%d",&b);
	
	c = a;
	a = b;
	b = c;
	
	printf("a value: %d",a);
	printf("\nb value: %d",b);
	return 0;
}
