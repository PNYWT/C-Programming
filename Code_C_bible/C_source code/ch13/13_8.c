#include <stdio.h>

#ifndef A
	#undef A
	#define A printf("This is Macro A\n");
	main() {
		A;
#else
	#undef B
	#define B printf("This is Macro B\n");
	main() {
		B;
#endif
printf("End processing Macro\n");
}

/* result
This is Macro A
End processing Macro
*/