#include <stdio.h>
#include <stdlib.h>

main() {
	int i,rand_num;
	srand(10);
	printf("Random number between 10 to  30 is %d\n",rand()%21+10);
	printf("Random number between  1 to  10 is %d\n",rand()%10+1);
	printf("Random number between -1 to 100 is %d\n",rand()%102-1);
}

/* result
Random number between 10 to  30 is 29
Random number between  1 to  10 is 8
Random number between -1 to 100 is 42
*/