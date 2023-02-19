#include <stdio.h>

main() {
	int check,x,y;
	printf("Prime number between 1-100 is\n");
	for(x=1;x<100;x++) {
		check = 1;
		for(y=2;y<x;y++) {
			if(!(x%y))
				check = 0;
		}
		if(check)
			printf("%d\t\t",x);
	}
}

/* result

Prime number between 1-100 is
1	2	3	5	7
11	13	17	19	23
29	31	37	41	43
47	53	59	61	67
71	73	79	83	89
97

*/