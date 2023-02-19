#include<stdio.h>

main() {
 	int count=0;
 	char ch;
 	for(ch='a';ch<='z';ch++){
		if(count%5 == 0)
			printf("\n");
	printf("ASCII %c = %d\t",ch,ch);
	count++;
 	}
}

/*
ASCII a = 97	ASCII b = 98	ASCII c = 99	ASCII d = 100	ASCII e = 101
ASCII f = 102	ASCII g = 103	ASCII h = 104	ASCII i = 105	ASCII j = 106
ASCII k = 107	ASCII l = 108	ASCII m = 109	ASCII n = 110	ASCII o = 111
ASCII p = 112	ASCII q = 113	ASCII r = 114	ASCII s = 115	ASCII t = 116
ASCII u = 117	ASCII v = 118	ASCII w = 119	ASCII x = 120	ASCII y = 121
ASCII z = 122
*/

/*
ASCII a = 97	ASCII b = 98	ASCII c = 99	ASCII d = 100	ASCII e = 101
ASCII f = 102	ASCII g = 103	ASCII h = 104	ASCII i = 105	ASCII j = 106
ASCII k = 107	ASCII l = 108	ASCII m = 109	ASCII n = 110	ASCII o = 111
ASCII p = 112	ASCII q = 113	ASCII r = 114	ASCII s = 115	ASCII t = 116
ASCII u = 117	ASCII v = 118	ASCII w = 119	ASCII x = 120	ASCII y = 121
ASCII z = 122
*/