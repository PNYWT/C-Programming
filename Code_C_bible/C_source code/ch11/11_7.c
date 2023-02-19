#include <stdio.h>


float average(float a,float b,float c,float d,float e) {
	float average;
	average = (a+b+c+d+e)/5;
	return average;
}

main() {
	float result,a=2,b=3,c=5,d=7,e=11;
	
	result = average(a,b,c,d,e);
	printf("Average of %.0f,%.0f,%.0f,%.0f,%.0f is %f\n",a,b,c,d,e,result);
}

/* result

Average of 2,3,5,7,11 is 5.600000

*/