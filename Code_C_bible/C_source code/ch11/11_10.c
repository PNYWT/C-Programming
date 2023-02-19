#include <stdio.h>

int count(char word[]) {
	int i=0,counter=0;

	while(word[i] != '\0') {
		switch(word[i]) {
			case ' ' :
				break;
			case '\t' :
				break;
			case '\n' :
				break;
			default  :
				counter++;
		}
		i++;
	}
	return counter;
}

main() {
	char word[50];
	int length;
	printf("Please enter word : ");
	fgets(word,50,stdin);
	length = count(word);
	printf("Length of your word is %d\n",length);
}


/* result
# 1
Please enter word : computer science
Length of your word is 15

# 2
Please enter word : c o m p u t e r    s c i e n c e
Length of your word is 15

# 3
Please enter word : com     p  u  ter scienc             e
Length of your word is 15

# 4
Please enter word : Hello!!! How are you?
Length of your word is 18

# 5
Please enter word : one two three
Length of your word is 11
*/