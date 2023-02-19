#include <stdio.h>

main() {
	struct test1 {
		int a;
		float b;
	} t1;

	union test2 {
		int a;
		float b;
	} t2;

	printf("Size of struct test1 is %d bytes\n",sizeof(struct test1));
	printf("Size of union test2 is %d bytes\n",sizeof(union test2));
}

/* result
Size of struct test1 is 8 bytes
Size of union test2 is 4 bytes
*/
