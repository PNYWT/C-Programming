#include <stdio.h>

main() {
	char str[100];
	int i,count=1;

	printf("Please enter string : ");
	gets(str);
	for(i=0;*(str+i)!='\0';i++) {
		if(*(str+i)==' ') count++;
	}
	printf("total character = %d\n",i);
	printf("total word = %d\n",count);
}

/*
Please enter string : My name is Orapin
total character = 17
total word = 4
*/