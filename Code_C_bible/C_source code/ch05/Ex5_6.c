#include <stdio.h>
#define ROUND 3
main() {
	const long int x = 3536;
	int y = 4 , i;
	for(i=0;i<ROUND;i++) {
		if(i==0) printf("%ld\t",x);
		else if(i==1) printf("%ld\t",x+y);
		else {
			x = x+4;
			printf("%ld\n",x+y);
		}
	}
}
