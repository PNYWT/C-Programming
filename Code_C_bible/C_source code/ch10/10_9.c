#include <stdio.h>
#include <stdlib.h>
main() {
	int num,result=0;
	int *pnum;
	int i;

	printf("This is summation program\n");
	printf("How many number do you like to make sum : ");
	scanf("%d",&num);

	pnum = (int *)malloc(num*sizeof(int));

	if(pnum == NULL)
		printf("Memory allocation failed\n");
	else {
		for(i=0;i<num;i++) {
			*(pnum+i) = 0;
			printf("num[%d] = ",i+1);
			scanf("%d",&pnum[i]);
			result = result + *(pnum+i);
		}
		printf("Summation of your number is %d\n",result);
		free(pnum);
	}
}

/* result
This is summation program
How many number do you like to make sum : 5
num[1] = 10
num[2] = 20
num[3] = 30
num[4] = 40
num[5] = 50
Summation of your number is 150
*/