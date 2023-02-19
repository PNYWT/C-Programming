#include <stdio.h>

void substract(int a,int b){
	printf("Result of %d-%d is %d\n\n",a,b,a-b);
}




void divide(int a,int b) {
	float result;
	result = (float)a/b;
	printf("Result of %d/%d is %f\n\n",a,b,result);
}
main(){
	int choice,num1,num2;
	do {
		printf("Calculate\n");
		printf("1. Substract\n");
		printf("2. Divide\n");
		printf("3. Exit\n");
		printf("Select choice : ");
		scanf("%d",&choice);

		if(choice < 1 || choice > 3)
			printf("Please enter choice 1-3 only\n\n");
		else if(choice == 3)
			break;
		else {
			printf("Enter number1 : ");
			scanf("%d",&num1);
			printf("Enter number2 : ");
			scanf("%d",&num2);
			if(choice==1)
				substract(num1,num2);
			else
				divide(num1,num2);
		}
	} while(choice != 3);
}

/* result
Calculate
1. Substract
2. Divide
3. Exit
Select choice : 1
Enter number1 : 5
Enter number2 : 3
Result of 5-3 is 2

Calculate
1. Substract
2. Divide
3. Exit
Select choice : 4
Please enter choice 1-3 only

Calculate
1. Substract
2. Divide
3. Exit
Select choice : 2
Enter number1 : 6
Enter number2 : 3
Result of 6/3 is 2.000000

Calculate
1. Substract
2. Divide
3. Exit
Select choice : 1
Enter number1 : 3
Enter number2 : 3
Result of 3-3 is 0

Calculate
1. Substract
2. Divide
3. Exit
Select choice : 3
*/