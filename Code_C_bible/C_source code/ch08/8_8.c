#include <stdio.h>
#include <math.h>

main() {
	int choice;
	double num1,num2;

	printf("############################\n");
	printf("#   Please select choice   #\n");
	printf("############################\n");
	printf("# 1. Plus      (+)         #\n");
	printf("# 2. Minus     (-)         #\n");
	printf("# 3. Multiply  (*)         #\n");
	printf("# 4. Divide    (/)         #\n");
	printf("# 5. Power                 #\n");
	printf("############################\n");
	printf("\n \t Select : ");
	scanf("%d",&choice);
	printf("\nEnter number1 : ");
	scanf("%lf",&num1);
	printf("Enter number2 : ");
	scanf("%lf",&num2);
	switch(choice) {
		case 1 :
			printf("%3.2lf + %3.2lf = %3.2lf\n",num1,num2,num1+num2);
			break;
		case 2 :
			printf("%3.2lf - %3.2lf = %3.2lf\n",num1,num2,num1-num2);
			break;
		case 3 :
			printf("%3.2lf * %3.2lf = %3.2lf\n",num1,num2,num1*num2);
			break;
		case 4 :
			printf("%3.2lf / %3.2lf = %3.2lf\n",num1,num2,num1/num2);
			break;
		case 5 :
			printf("%3.2lf power %3.2lf = %3.2lf\n",num1,num2,pow(num1,num2));
			break;
		default :
			printf("Please select choice 1-5 only\n");
	}
}

/* result
# 1
#################################
#                     Please select choice                      #
#################################
#	1.Plus	(+)	                              #
#	2.Minus	(-)	                              #
#	3.Multiply   (*)	                              #
#	4.Divide       (/)	                              #
#	5.Power		                              #
#################################


	Select : 1

Enter number1 : 2
Enter number2 : 3
2.00 + 3.00 = 5.00

# 2
#################################
#                     Please select choice                      #
#################################
#	1.Plus	(+)	                              #
#	2.Minus	(-)	                              #
#	3.Multiply   (*)	                              #
#	4.Divide       (/)	                              #
#	5.Power		                              #
#################################


	Select : 5

Enter number1 : 2
Enter number2 : 3
2.00 power 3.00 = 8.00

# 3
#################################
#                     Please select choice                      #
#################################
#	1.Plus	(+)	                              #
#	2.Minus	(-)	                              #
#	3.Multiply   (*)	                              #
#	4.Divide       (/)	                              #
#	5.Power		                              #
#################################

	Select : 7

Enter number1 : 2
Enter number2 : 3
Please select choice 1-5 only
*/