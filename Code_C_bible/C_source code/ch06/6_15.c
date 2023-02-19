#include <stdio.h>
main() {
	int x = 2, y = 3;
	printf("x : %d, y : %d\n", x, y);
	printf("x *= y same as x = x * y \n");
	printf("Result : x is %d\n\n", x *= y);

	printf("x : %d, y : %d\n", x, y);
	printf("x %%= y same as x = x %% y \n");
	printf("Result : x is %d\n", x %= y);
}



/* result
x:2 , y:3
x*=y same as x=x*y
So x is 6

x:6 , y:3
x%=y same as x=x%y
So x is 0
*/