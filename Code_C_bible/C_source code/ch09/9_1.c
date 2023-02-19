#include <stdio.h>

main() {
	int a[10];
	float b[5];
	char c[100];

	printf("a is 10 element int array ( size of int = 2 byte )\n");
	printf("So size of array a are %d bytes\n\n",sizeof(a));
	printf("b is 5 element float array ( size of float = 4 byte )\n");
	printf("So size of array b are %d bytes\n\n",sizeof(b));
	printf("c is 100 element char array ( size of char = 1 byte )\n");
	printf("So size of array c are %d bytes\n\n",sizeof(c));
}

/* result
a is 10 element int array ( size of int = 2 byte )
So size of array a are 20 bytes

b is 5 element float array ( size of float = 4 byte )
So size of array b are 20 bytes

c is 100 element char array ( size of char = 1 byte )
So size of array c are 100 bytes
*/