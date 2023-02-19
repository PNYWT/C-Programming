#include <stdio.h>

main() {
	float value[5]={1.1,2.2,3.3,4.4,5.5};
	float *p;

	p=&value[2];
	printf("assign p=&value[2] , p point to value %.1f\n",p[0]);
	printf("if p backward 2 step , p point to value %.1f\n",p[-2]);
	printf("if p forward 1 step , p point to value %.1f\n",p[1]);
}

/* result
assign p=&value[2] , p point to value 3.3
if p backward 2 step , p point to value 1.1
if p forward 1 step , p point to value 4.4
*/