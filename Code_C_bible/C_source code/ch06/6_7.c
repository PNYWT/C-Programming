#include <stdio.h>
main() {
	printf("Logical Operation\n");
	printf("Result of expression 30>20 is %d\n",30>20);
	printf("Result of expression 200>=200 is %d\n",200>=200);
	printf("Result of expression 10==10 is %d\n",10==10);
	printf("Result of expression 10!=10 is %d\n\n",10!=10);

	printf("Result of expression ((10*7/5)&&0) is %d\n",((10*7/5)&&0));
	printf("Result of expression 10&&1 is %d\n\n",10&&1);

	printf("Result of expression ((2!=1)||0) is %d\n",((2!=1)||0));
	printf("Result of expression ((2==1)||0) is %d\n\n",((2==1)||0));

	printf("Result of expression !0 is %d\n",!0);
	printf("Result of expression !1 is %d\n",!1);
	printf("Result of expression !!!!0 is %d\n",!!!!0);
	printf("Result of expression !!!!(!1) is %d\n",!!!!(!1));
}

/* result
Logical Operation
Result of expression 30>20 is 1
Result of expression 200>=200 is 1
Result of expression 10==10 is 1
Result of expression 10!=10 is 0

Result of expression ((10*7/5)&&0) is 0
Result of expression 10&&1 is 1

Result of expression ((2!=1)||0) is 1
Result of expression ((2==1)||0) is 0

Result of expression !0 is 1
Result of expression !1 is 0
Result of expression !!!!0 is 0 
Result of expression !!!!(!1) is 0 
*/