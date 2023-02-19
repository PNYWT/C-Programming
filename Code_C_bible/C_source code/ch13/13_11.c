#include <stdio.h>
#define A 1

#if A==0
	char language[4] = "THA";
#else
	char language[4] = "ENG";
#endif

main() {
	printf("Flag A is %d , Language is %s\n",A,language);
}

/* result 
Flag A is 1 , Language is ENG
*/