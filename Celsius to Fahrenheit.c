//Celsius to Fahrenheit
#include<stdio.h>

int main() {
	float c, f;
	
	printf("Enter Celsius: ");
	scanf("%f",&c);
	
	f = (9.0/5.0 * c) + 32;
	
	printf("Fahrenheit: %f",f);
	return 0;
}
