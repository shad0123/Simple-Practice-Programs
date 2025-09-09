//perimeter of a rectangle
#include<stdio.h>

int main(){
	int l, b, p;
	
	printf("Enter length and breadth: ");
	scanf("%d %d", &l, &b);
	
	p = 2 * (l + b);
	
	printf("Perimeter: %d", p);
	return 0;
}
