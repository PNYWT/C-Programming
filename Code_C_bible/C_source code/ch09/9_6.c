#include <stdio.h>

main() {
	int a[3] = {101,201,301};
	int b[]  = {101,201,301};
	int i;
	char c[3] = "ab";
	char d[3] = {'a','b'};

	printf("Compare between array a and array b\n");
	for(i=0;i<3;i++) {
		printf("a[%d] = %d , b[%d] = %d\n",i,a[i],i,b[i]);
	}
	printf("sizeof a is %d\n",sizeof(a));
	printf("sizeof b is %d\n",sizeof(b));
	printf("So array a same as array b\n\n");

	for(i=0;i<3;i++) {
		if(c[i] == '\0')
			printf("array c terminate with NULL character\n");
		else
			printf("c[%d] = %c\n",i,c[i]);
	}
	for(i=0;i<3;i++) {
		if(d[i] == '\0')
			printf("array d terminate with NULL character\n");
		else
			printf("d[%d] = %c\n",i,d[i]);
	}
}


/* result
		      Compare between array a and array b						      a[0] = 101 , b[0] = 101	
			      a[1] = 201 , b[1] = 201
			      a[2] = 301 , b[2] = 301
array a have 3 element
array b have 3 element
So array a same as array b	


						                          		      c[0] = a
		      c[1] = b
		      array c terminate with NULL character
		      d[0] = a
		      d[1] = b
		      array d terminate with NULL character
*/