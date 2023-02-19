#include <stdio.h>
main() {
	char   a = 'A';
	int    b = 10;
	float  c = 200.0;
	double d = 93.2;
	
	printf("Before\n");
	printf("Character is %c\n",a);
	printf("Numeric character is %d\n",a);
	printf("Integer is %d\n",b);
	printf("Floating is %f\n",c);
	printf("Double is %f\n",d);

	b = b+a; 
	c = c+a; 
	d = d+a; 

	printf("\nAfter\n");
	printf("Character is %c\n",a);
	printf("Numeric character is %d\n",a);
	printf("Integer is %d\n",b);
	printf("Floating is %f\n",c);
	printf("Double is %f\n",d);
}

/* result
Before
Character is A
Numeric character is 65
Integer is 10
Floating is 200.000000
Double is 93.200000

After
Character is A
Numeric character is 65
Integer is 75
Floating is 265.000000
Double is 158.200000
*/