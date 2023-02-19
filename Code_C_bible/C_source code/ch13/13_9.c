#include <stdio.h>
#include <string.h>
#define A "HELLO!!!"

#ifdef A
	main() {
		char greeting[9];
		strcpy(greeting,A);
#else
	#define A "HELLO!!!"
	main() {
		char greeting[9];
		strcpy(greeting,A);
#endif

	printf("%s\n",greeting);
	printf("HOW ARE YOU?\n");
}

/* result :

	HELLO!!!
	HOW ARE YOU?

*/