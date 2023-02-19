#include<stdio.h>

main() {
	long int sum=1;
 	int count=1,fac;
 	printf("Please enter number of factorial : ");
 	scanf("%d",&fac);
 	while(count<=fac) {
   		sum=sum*count;
   		count=count+1;
 	}
 	printf("Result of %d! is %ld",fac,sum);
}



/*
Please enter number of factorial : 10
Result of 10! is 3628800
*/