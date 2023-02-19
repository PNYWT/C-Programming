#include <stdio.h>

void ascii_char(int num) {
	printf("Your character is %c\n",num);
}

main() {
	int number;
	printf("Please enter number between 1-255 : ");
	scanf("%d",&number);
	ascii_char(number);
}

/* result
Please enter number between 1-255 : 97
Your character is a
*/