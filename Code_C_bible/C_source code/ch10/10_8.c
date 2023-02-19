#include <stdio.h>

main() {
	int a[5]={1,2,3,4,5};
	int b[5]={10,20,30,40,50};
	int i;
	int *p=a;
	int *q[5];

	for(i=0;i<5;i++) {
		if(i%2 != 0)
			q[i] = &a[i];
		else
			q[i] = &b[i];
		printf("*q[%d] = %d\n",i,*q[i]);
	}
	printf("*p = %d\n",*p);
}

/* result

*q[0] = 10
*q[1] = 2
*q[2] = 30
*q[3] = 4
*q[4] = 50
*p = 1

*/