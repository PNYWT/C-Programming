#include <stdio.h>

struct data change(struct data);

struct data {
	int a;
	char b;
} d = {1,'A'};

main() {
	struct data dd;
	printf("Before\n");
	printf("a = %d\n",d.a);
	printf("b = %c\n",d.b);

	dd = change(d);
	printf("After\n");
	printf("a = %d\n",dd.a);
	printf("b = %c\n",dd.b);
}

struct data change(struct data dt) {
	dt.a = 2;
	dt.b = 'B';
	return dt;
}

/* result
Before
a = 1
b = A
After
a = 2
b = B
*/