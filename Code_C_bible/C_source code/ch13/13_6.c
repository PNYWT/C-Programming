#include <stdio.h>

#define MAX(x,y) ((x)>(y)?(x):(y))
#define MAX_MIN(x,y) { \
	if(x>y) \
		printf("MAX : %d , MIN : %d\n",x,y); \
	else \
		printf("MAX : %d , MIN : %d\n",y,x); \
}

main()
{
	int x=5,y=2,max;

	max = MAX(x,y);
	printf("max value from macro MAX is %d\n",max);
	MAX_MIN(x,y);
}

/* result
	max value from macro MAX is 5
	MAX : 5 , MIN : 2
*/