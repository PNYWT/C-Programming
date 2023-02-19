#include <stdio.h>
#include <string.h>

int findMax(int num[]);
main() {
	int number[5] = {20,50,100,99,9};
	int max;

	max = findMax(number);
	printf("number[1] : %d\n",number[0]);
	printf("number[2] : %d\n",number[1]);
	printf("number[3] : %d\n",number[2]);
	printf("number[4] : %d\n",number[3]);
	printf("number[5] : %d\n",number[4]);
	printf("Maximum of these number is %d\n",max);
}

int findMax(int num[]) {
	int maximum,i=0;
	maximum = num[i];

	for(i=0;i<5;i++) {
		if(num[i] > maximum)
			maximum = num[i];
	}
	return maximum;
}

/* result
number[1] : 20
number[2] : 50
number[3] : 100
number[4] : 99
number[5] : 9
Maximum of these number is 100
*/