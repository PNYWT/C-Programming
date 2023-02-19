#include <stdio.h>
#define PI 3.14159

main() {
	float radius = 7.5,area,circum;
	area = PI * radius * radius;
	circum = 2 * PI * radius;
	
	printf("Radius of circle is %f\n",radius);
	printf("\tArea of circle is %.3f\n",area);
	printf("\t\tCircumference of circle is %.5f\n",circum);
	printf("\nConclusion\n");
	printf("**************************************************\n");
	printf("Radius \t\tArea \t\tCircular\n");
	printf("**************************************************\n");
	printf("%7.2f \t%-7.2f \t%7.2f\n",radius,area,circum);
	printf("**************************************************\n");
	printf("**************************************************\n");
	printf("1234567890 \t1234567890 \t1234567890\n");
}

/* result
Radius of circle is 7.500000
	     Area of circle is 176.714
		      Circumference of circle is 47.12385

Conclusion
**************************************************
Radius		    Area		           Circular
**************************************************
        7.50        176.71                  47.12
**************************************************
**************************************************
1234567890	1234567890	1234567890
*/