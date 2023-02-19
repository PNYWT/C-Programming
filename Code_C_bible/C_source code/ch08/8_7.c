#include <stdio.h>

main() {
	char ch;

	scanf("%c",&ch);

	switch(ch) {
		case '\n':
			printf("You press enter");
			break;
		case '\t':
			printf("You press tab");
			break;
		case ' ':
			printf("You press spacebar");
			break;
		default:
			printf("You don't press enter,tab and spacebar");
	}
}