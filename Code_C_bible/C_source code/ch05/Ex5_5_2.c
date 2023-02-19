#include <stdio.h>
int c = 1;
extern int a;
int test() {
	++c;
	return a+c;
}

/* Rename file to test.c
Then put it into same directory of Ex5_5_2.c */