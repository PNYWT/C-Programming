#include <stdio.h>
#include <stdlib.h>

main() {
	double f=0;
	int i=0;
	long l=0;

	f = atof("4");
	i = atoi("3");
	l = atol("2");

	f = f*1.5;
	i = i+3;
	l = l-1;

	printf("Double number is %.2f\n",f);
	printf("Integer number is %d\n",i);
	printf("Long number is %ld\n",l);
}

/* result
Double number is 6.00
Integer number is 6
Long number is 1
*/