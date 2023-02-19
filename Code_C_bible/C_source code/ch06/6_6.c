#include <stdio.h>
main() {
	int    a = 10;
	int    b = 4;
	double c;

	c = a/b;
	printf("Not casting\n");
	printf("Result of c is %f\n\n",c);

	c = (double)(a/b);
	printf("Casting result of a/b\n");
	printf("Result of c is %f\n\n",c);

	c = (double)a/b;
	printf("Not casting result of a/b but casting value of a\n");
	printf("Result of c is %f\n",c);
}

/* result
Not casting
Result of c is 2.000000

Casting result of a/b
Result of c is 2.000000

Not casting result of a/b but casting value of a
Result of c is 2.500000
*/