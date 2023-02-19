#include <stdio.h>

main() {
	char ch;
	printf("Please enter character : ");
	scanf("%c",&ch);
	while(ch != '\n') {
		scanf("%c",&ch);
	}
}

/* result
Please enter character : Hellohihowareyouhahaahahahahha
*/