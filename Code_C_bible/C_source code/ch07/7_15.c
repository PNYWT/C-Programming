#include <stdio.h>

main() {
	char name[10];
	int a,b,c;
	float d,e,f;

	printf("Enter your name : ");
	scanf("%s",name);
	printf("Enter integer  number1 : ");
	scanf("%d",&a);
	printf("Enter integer  number2 : ");
	scanf("%d",&b);
	printf("Enter integer  number3 : ");
	scanf("%d",&c);
	printf("Enter floating number4 : ");
	scanf("%f",&d);
	printf("Enter floating number5 : ");
	scanf("%f",&e);
	f = (a+b+c+d+e)/5;
	printf("\nHi %s\n",name);
	printf("Average of your number are %.2f",f);
}

/* result
Enter your name : Maruko
Enter integer  number1 : 1
Enter integer  number2 : 2
Enter integer  number3 : 3
Enter floating number4 : 4.5
Enter floating number5 : 5.5

Hi Maruko
Average of your number are 3.20
*/
