#include <stdio.h>
main() {
	int a = 9 , b = 6 , c = 0;
	c = (a++)+(++b);
	printf("%d %d %d\n",a,b,c);
	c = (--a)-(--b);
	printf("%d %d %d\n",a,b,c);
	c = ++a;
	c = c-b--;
	c = c+--a;
	c = c-++b;
	printf("%d %d %d\n",a,b,c);
}

/*
10 7 16
9 6 3
9 6 7
*/