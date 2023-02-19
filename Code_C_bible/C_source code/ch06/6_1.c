#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void) {
	int x,y,z;
	printf("Enter x : ");
	scanf("%d",&x);
	printf("Enter y : ");
	scanf("%d",&y);
	printf("x+y = %d\n",x+y);
	printf("x-y = %d\n",x-y);
	printf("x*y = %d\n",x*y);
	printf("x/y = %d\n",x/y);
	printf("x mod y = %d\n",x%y);
	z = x++;
	printf("z=x++; x=%d , z=%d\n",x,z);
	z = ++x;
	printf("z=++x; x=%d , z=%d\n",x,z);
	z = y--;
	printf("z=y--; y=%d , z=%d\n",y,z);
	z = --y;
	printf("z=--y; y=%d , z=%d\n",y,z);
}

/* result
Enter x : 35
Enter y : 10
x+y = 45
x-y = 25
x*y = 350
x/y = 3
x mod y = 5
z=x++; x=36 , z=35
z=++x; x=37 , z=37
z=y--; y=9 , z=10
z=--y; y=8 , z=8
*/