#include <stdio.h>

main() {
	int i,j;
	
	for(i=1,j=1;i<=10;i++) {
		if(i==3){
			j++;
			continue;
			printf("This is round %d\n",i);
		}
		else {
			printf("This is round %d\n",j);
			j++;
		}
		if(i==5) break;
	}
	printf("Loop perform %d rounds\n",i);
}

/* result
This is round 1
This is round 2
This is round 4
This is round 5
Loop perform 5 rounds
*/