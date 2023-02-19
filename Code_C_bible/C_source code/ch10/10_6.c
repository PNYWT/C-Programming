#include <stdio.h>
#include <string.h>

main() {
	char str[80],tmp;
	char *p=str;
	int i,j;

	printf("Enter word : ");
	fgets(str,80,stdin);

	for(i=0;i<strlen(str)-1;i++)
	for(j=i+1;j<=strlen(str)-1;j++) {
		if(*(p+i) > *(p+j)) {
			tmp = *(p+i);
			*(p+i) = *(p+j);
			*(p+j) = tmp;
		}
	}
	printf("Your word ( sort by character ) is : %s\n",str);
}

/* result
# 1
 Enter word : Microprocessor
 Your word ( sort by character ) is : 
Mcceioooprrrss 

# 2
 Enter word : computer
 Your word ( sort by character ) is : 
cemoprtu

# 3
 Enter word : programming
 Your word ( sort by character ) is : 
aggimmnoprr
 */