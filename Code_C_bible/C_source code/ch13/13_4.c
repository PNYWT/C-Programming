#include <stdio.h>

#define PI 3.14
#define TIMES 2
#define ROUNDS 3*TIMES
#define ADD 2+1+a

main() {
	int a=3,result;

	printf("Value of Macro PI is %f\n",PI);
	printf("Value of Macro TIMES is %d\n",TIMES);
	printf("Value of Macro ROUNDS is %d\n",ROUNDS);
	printf("Value of Macro ADD 1+2+%d is %d\n",a,ADD);
	result = 5*ADD;
	printf("Result is %d\n",result);
}

/* result
Value of Macro PI is 3.140000
Value of Macro TIMES is 2
Value of Macro ROUNDS is 6
Value of Macro ADD 1+2+3 is 6 
Result is 14 
*/