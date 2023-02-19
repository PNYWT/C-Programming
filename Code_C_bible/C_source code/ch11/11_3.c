#include <stdio.h>

void banner(void);
void greeting(void);

main() {
	banner();
	greeting();
}

void banner(void) {
	printf("##############\n");
	printf("# C LANGUAGE #\n");
	printf("##############\n");
}

void greeting(void) {
	printf("W   l   o   e\n");
	printf("  e   c   m   to C Language\n");
}