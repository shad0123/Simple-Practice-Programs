//calculate simple interest
#include<stdio.h>

int main() {
//	declaring variables
	int p, r, t, si;
	
//	user input
	printf("Enter principal: ");
	scanf("%d",&p);
	printf("Enter rate: ");
	scanf("%d",&r);
	printf("Enter time: ");
	scanf("%d",&t);
	
//	formula
	si = p * r * t /100;
	
//	output
	printf("Simple Interest: %d",si);
	return 0;
}
