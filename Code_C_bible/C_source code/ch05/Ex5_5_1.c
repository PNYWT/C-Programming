#include <stdio.h>						
int a = 1;				
main() {				
	static int b = 2;			
	int d = 0;			
	d = test();			
	d = d*b;
	++b;
	d = test();
	d = d*b;
	printf("d = %d",d);
}

/*
This file is testMain.c
*/

/*
d = 12
*/