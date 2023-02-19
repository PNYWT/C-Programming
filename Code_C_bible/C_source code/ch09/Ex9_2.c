#include <stdio.h>
#include <string.h>

main() {
        char word[80];
        int i;

        printf("Please enter word : ");
        fgets(word,80,stdin);
        for(i=0;i<strlen(word);i++) {
        	if(word[i] != '\n') {
        		if(word[i] < 65 || (word[i] > 90 && word[i] < 97) || word[i] > 122) {
                    printf("Please enter word that content a-z or A_Z only\n");
                    exit(1);
                }
                if(word[i] >=97 && word[i] <=122)
                    word[i] = word[i]-32;	
			}
        }
        printf("Uppercase word is %s\n",word);
}