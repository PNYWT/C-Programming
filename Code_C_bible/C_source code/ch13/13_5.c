#include <stdio.h>

#define SQUARE(A) (A*A)
#define ADD(B) (B+B)

main() {
	int param=3,result=0;

	printf("Value of param is %d\n",param);
	result = SQUARE(5);
	printf("Result of SQUARE(5) is %d\n",result);
	result = SQUARE(param);
	printf("Result of SQUARE(param) is %d\n",result);
	result = ADD(param);
	printf("Result of ADD(param) is %d\n",result);
}

/* result :
	Value of param is 3
	Result of SQUARE(5) is 25
	Result of SQUARE(param) is 9
	Result of ADD(param) is 6
*/