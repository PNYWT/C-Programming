#include <stdio.h>

main() {
	int i,j;
	
	for(i=1;i<=3;i++) {
		printf("i = %d\n",i);
		for(j=1;j<=i;j++)
			printf("j = %d\n",j);
		printf("\n");
	}
}

/* result
i = 1
j = 1

i = 2
j = 1
j = 2

i = 3
j = 1
j = 2
j = 3
*/