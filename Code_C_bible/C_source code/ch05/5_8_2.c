#include <stdio.h>

void printVar() {
	auto int a = 0;
	static int b = 0;

	a++;
	b++;

	printf("a=%d   b=%d\n",a,b);
}

/*
This file is printVar.c
Please rename file from 5_8_2.c to printVar.c
Then put it in same project of 5_8_1.c before compile and run
*/