#include <stdio.h>
#include <stdlib.h>

main() {
	int i;
	int *p;
	char *q;

	p = (int *)malloc(3*sizeof(int));
	q = (char *)calloc(3,sizeof(char));

	if(p==NULL)
		printf("Memory allocation by malloc(); failed\n");
	else if(q==NULL)
		printf("Memory allocation by calloc(); failed\n");
	else {
		*p = 1;
		*(p+1) = 2;
		*(p+2) = 3;
		q[0] = 'A';
		q[1] = 'B';
		q[2] = 'C';
		printf("First time\n");
		for(i=0;i<3;i++) {
			printf("%d\t%c\n",p[i],q[i]);
		}

		p = (int *)realloc(p,5*sizeof(int));
		if(p==NULL)
			printf("Cannot reallocate memory of p\n");
		else {
			p[3] = 4;
			p[4] = 5;
		}

		q = (char *)realloc(q,5*sizeof(char));
		if(q==NULL)
			printf("Cannot reallocate memory of q\n");
		else {
			q[0] = 'H';
			q[1] = 'e';
			q[2] = 'l';
			q[3] = 'l';
			q[4] = 'o';
		}

		printf("\nSecond time (after rellocate memory)\n");
		for(i=0;i<5;i++) {
			printf("%d\t%c\n",p[i],q[i]);
		}
		free(p);
		free(q);
	}
}

/* result
First time
1			A
2			B
3			C

Second time (after reallocate memory)
1			H
2			e
3			l
4			l
5			o
*/