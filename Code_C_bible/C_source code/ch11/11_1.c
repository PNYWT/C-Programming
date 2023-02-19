#include <stdio.h>

int add(int a,int b) {
	int sum;
	sum = a+b;
	return sum;
}

main() {
	int x,y,result;
	printf("Please enter number1 : ");
	scanf("%d",&x);
	printf("Please enter number2 : ");
	scanf("%d",&y);
	result = add(x,y);
	printf("Result of %d + %d is %d\n",x,y,result);
}

/* result
Please enter number1 : 1
Please enter number2 : 2
Result of 1 + 2 is 3
*/