//square and cube of a number
#include<stdio.h>

int main() {
	int num, sq, cube;
	
	printf("Enter number: ");
	scanf("%d",&num);
	
	sq = num * num;
	cube = num * num * num;
	
	printf("Square of number: %d\nCube of number: %d",sq,cube);
	return 0;
}
