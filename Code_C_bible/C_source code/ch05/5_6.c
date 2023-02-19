#include <stdio.h>

int i = 1;

int testVar(int j) {
	int n = 3;
	return n*j;
}

main() {
	int m;
	printf("Global variable i is %d\n",i);
	m = testVar(i);
	m = m*n;
	printf("Local variable m is %d\n",m);
}

/* result

'n': undeclared identifier

or

Global variable i is 1
Local variable m is 3
*/