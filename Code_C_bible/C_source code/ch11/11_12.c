#include <stdio.h>

void swap(int *,int *);

main() {
	int x=3,y=5;
	printf("Before swap\n");
	printf("x=%d , y=%d\n\n",x,y);
	swap(&x,&y);
	printf("After swap\n");
	printf("x=%d , y=%d\n",x,y);
}

void swap(int *a,int *b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

/* result
Before swap
x=3 , y=5

After swap
x=5 , y=3
*/