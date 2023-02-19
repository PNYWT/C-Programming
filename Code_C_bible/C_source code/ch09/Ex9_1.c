#include <stdio.h>
#include <string.h>

main() {
	int num[7],temp;
	int i,j;

	printf("Please enter seven integer numbers ( Ex. 1 2 3 4 5 6 7 ) : ");
	for(i=0;i<7;i++)
	scanf("%d",&num[i]);

	for(i=0;i<6;i++)
	for(j=0;j<6;j++)
	    if(num[j]>num[j+1]) {
	    	temp=num[j];
	      	num[j]=num[j+1];
	      	num[j+1]=temp;
	    }
	printf("First maximum number  : %d\n",num[6]);
	printf("Second maximum number : %d\n",num[5]);
	printf("First minimum number  : %d\n",num[0]);
	printf("Second minimum number : %d\n",num[1]);
}

/*
Please enter seven integer numbers ( Ex. 1 2 3 4 5 6 7 ) : 1 2 3 7 6 5 4
First maximum number  : 7
Second maximum number : 6
First minimum number  : 1
Second minimum number : 2
*/