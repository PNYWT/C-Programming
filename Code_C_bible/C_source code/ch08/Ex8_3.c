#include<stdio.h>

main() { 
 	int num,a,b,c,d;
 	printf("Please enter number ( not more than 9999 ) : ");
 	scanf("%d",&num);
 	if(num > 9999)
		printf("Your number more than 9999\n");
 	else {
		a=num/1000;
	 	b=(num%1000)/100;
	 	c=(num%100)/10;
	 	d=num%10;
	 	printf("Inverse number is : %d%d%d%d",d,c,b,a);
 	}
}

/*
Please enter number ( not more than 9999 ) : 1234
Inverse number is : 4321
*/