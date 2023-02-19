#include <stdio.h>

main() {
	const float tax = 3.5f;
	printf("Memory constant : define tax is %f\n",tax);
	tax = 4.75;
	printf("Memory constant : define tax is %f\n",tax);
}

/* result
Error : assignment of read-only variable 'tax'
*/