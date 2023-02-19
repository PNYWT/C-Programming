#include <stdio.h>

main() {
	char greeting_words[20];

	printf("Enter your greeting words : ");
	if (scanf_s("%[^\n]", greeting_words, 19) == 1) {
		printf("Your first word is %s\n", greeting_words);
	}
	else {
		printf("Please input data 19 characters only\n");
	}
}