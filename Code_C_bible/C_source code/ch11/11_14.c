#include <stdio.h>
#include <math.h>

main() {
	double a=3,b=2,c=9,d=3.5,e=-7;
	double result;

	printf("a=%.2f\t b=%.2f\t c=%.2f\t d=%.2f\t e=%.2f\t\n",a,b,c,d,e);
	result = pow(a,b);
	printf("a power b : %.2f\n",result);

	result = sqrt(c);
	printf("square root of c : %.2f\n",result);

	result = ceil(d);
	printf("ceil of d : %.2f\n",result);

	result = floor(d);
	printf("floor of d : %.2f\n",result);

	result = fabs(e);
	printf("absolute of e : %.2f\n",result);
}

/* result
a=3.00	b=2.00	c=9.00	d=3.50	e=-7.00
a power b : 9.00
square root of c : 3.00
ceil of d : 4.00
floor of d : 3.00
absolute of e : 7.00
*/