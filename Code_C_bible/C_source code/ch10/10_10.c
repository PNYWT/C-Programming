#include <stdio.h>
#include <stdlib.h>

main() {
	int i;
	int *p,*q;

	p = (int *)calloc(5,sizeof(int));
	q = (int *)malloc(5*sizeof(int));

	if(p==NULL)
		printf("Memory allocation by calloc(); failed\n");
	else if(q==NULL)
		printf("Memory allocation by malloc(); failed\n");
	else {
		for(i=0;i<3;i++) {
			printf("p[%d] = %d \t q[%d] = %d\n",i,p[i],i,*(q+i));
		}
		free(p);
		free(q);
	}
}

/* result
p[0] = 0		q[0] = 29952
p[1] = 0		q[1] = 2830
p[2] = 0		q[2] = 30207
*/