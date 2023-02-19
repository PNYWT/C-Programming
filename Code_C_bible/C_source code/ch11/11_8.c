#include <stdio.h>

int area;

int sqr(int side);
void printArea(int side,int area);

main() {
	int side;
	printf("Please enter side of square : ");
	scanf("%d",&side);
	area = sqr(side);
	printArea(side,area);
}

int sqr(int side) {
	area = side*side;
	return area;
}

void printArea(int side,int area) {
	printf("Square area of %d*%d is %d\n",side,side,area);
}


/* result
Please enter side of square : 5
Square area of 5*5 is 25
*/