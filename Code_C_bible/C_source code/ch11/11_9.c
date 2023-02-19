#include <stdio.h>

int sub_function(void);

main() {
	int value;
	printf("This program will call sub function to return value\n");
	value = sub_function();
	printf("Return value from sub function is %d\n",value);	
}
int sub_function(void) {
	int ret_val=5,i;
	for(i=0;i<5;i++)
		ret_val = ret_val+i;
	return ret_val;
}

/* result
	This program will call sub function to return value
	Return value from sub function is 64
*/