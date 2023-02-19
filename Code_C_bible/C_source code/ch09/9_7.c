#include <stdio.h>
#include <string.h>
#define MAX_VALUE 100

main() {
	int i;
	char word[MAX_VALUE];

	printf("Enter word : ");
	fgets(word,MAX_VALUE,stdin);
	printf("Reverse of your word is \n");
	for(i=strlen(word)-1;i>=0;i--) {
		printf("%c",word[i]);
	}
}

/* result
Enter word : orapin
Reverse of your word is

niparo
*/