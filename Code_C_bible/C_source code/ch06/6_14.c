#include <stdio.h>
main() {
	printf("Bitwise Operation\n");
	printf("Result of expression 10&2 is %d\n",10&2);
	printf("Result of expression 10|2 is %d\n",10|2);
	printf("Result of expression 10^2 is %d\n",10^2);
	printf("Result of expression ~10 is %d\n",~10);
	printf("Result of expression ~2 is %d\n",~2);
	printf("Result of expression 10>>2 is %d\n",10>>2);
	printf("Result of expression 10<<2 is %d\n",10<<2);
}

/* result
Bitwise Operation
Result of expression 10&2 is 2
Result of expression 10|2 is 10
Result of expression 10^2 is 8
Result of expression ~10 is -11
Result of expression ~2 is -3
Result of expression 10>>2 is 2
Result of expression 10<<2 is 40
*/