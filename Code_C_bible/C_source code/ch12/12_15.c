#include <stdio.h>

struct person test(void);

struct person {
	int a;
	char b;
};

main() {
	struct person p;
	p = test();
	printf("a = %d\n",p.a);
	printf("b = %c\n",p.b);
}

struct person test() {
	struct person ps;
	ps.a=1;
	ps.b='A';
	return ps;
}

/*result
a = 1
b = A
*/