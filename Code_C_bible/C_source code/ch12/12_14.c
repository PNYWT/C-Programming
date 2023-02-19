#include <stdio.h>

struct person {
	int a;
	char b;
} p={1,'A'};

void print(struct person ps) {
	printf("a = %d\n",ps.a);
	printf("b = %c\n",ps.b);
}

main() {
	print(p);
}

/* result
a = 1
b = A
*/