#include <stdio.h>

main() {
	int num1,num2,max;
	printf("Please enter number1 : ");
	scanf("%d",&num1);
	printf("Please enter number2 : ");
	scanf("%d",&num2);
	max = (num1 > num2) ? num1 : num2;
	printf("Max value is %d",max);
}

/* 
if (num1 > num2)
	printf("Max value is %d",num1);
else
	printf("Max value is %d",num2);
*/	

/* result
# 1
Please enter number1 : 100
Please enter number2 : 55
Max value is 100

# 2
Please enter number1 : 25
Please enter number2 : 26
Max value is 26
*/