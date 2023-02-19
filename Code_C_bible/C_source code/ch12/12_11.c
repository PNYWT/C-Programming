#include <stdio.h>

main() {
	typedef struct {
		int a;
		char b;
	} TEST;
	TEST t[3] = {{1,'A'}};

	int i;
	
	printf("Before\n");
	for(i=0;i<3;i++) {
		printf("%d\t%c\n",t[i].a,t[i].b);
	}

	printf("After\n");
	for(i=0;i<3;i++) {
		printf("%d\t%c\n",t[i].a,t[i].b);
		t[i+1].a = ++t[i].a;
		t[i+1].b = ++t[i].b;
	}
}

/* result

Before
1       A
0
0
After
1       A
2       B
3       C

*/