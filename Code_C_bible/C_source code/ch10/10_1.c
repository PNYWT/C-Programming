#include <stdio.h>

main() {
	int a=2,b=3;
	int *p=&a;

	printf("Pointer variable p points to variable a at address %p\n",p);
	printf("Value of a is %d , value of p is %d too\n",a,*p);
	p=&b;
	printf("Now,pointer variable p points to variable b at address %p\n",p);
	printf("Value of b is %d , value of p is %d too\n",b,*p);
}

/* result
Pointer variable p points to variable a at address FFF4
Value of a is 2 , value of p is 2 too
Now,pointer variable p points to variable b at address FFF2
Value of b is 3 , value of p is 3 too
*/