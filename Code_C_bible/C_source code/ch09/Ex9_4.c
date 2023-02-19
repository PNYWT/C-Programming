#include <stdio.h>
#include <conio.h>
#include <string.h>

main() {
	char fruit[5][20] = { "apple","banana","cherry","orange","strawberry" };
	char show[20], old_guess[100];
	int choice, i, j = 0, check = 0, guess = 0, status = 0;
	char guess_word;

	printf("Hangman game\n");
	// choice1=apple , choice2=banana , choice3=cherry
	// choice4=orange , choice5=strawberry
	do {
		printf("Please select choice 1-5 : ");
		scanf("%d", &choice);
	} while (choice < 1 || choice>5);

	for (i = 0; i < strlen(fruit[choice - 1]); i++) {
		if (fruit[choice - 1][i] == 'a' || fruit[choice - 1][i] == 'e' || 
			fruit[choice - 1][i] == 'i' || fruit[choice - 1][i] == 'o' || 
			fruit[choice - 1][i] == 'u') {
			show[i] = fruit[choice - 1][i];
			old_guess[j++] = fruit[choice - 1][i];
			guess++;
		}
		else
			show[i] = '_';
	}
	show[i] = '\0';

	guess = strlen(fruit[choice - 1]) - guess;
	printf("Please guess word\n");
	for (i = 0; i < strlen(show); i++)
		printf("%c ", show[i]);
	printf("\n\n");

	while (check != guess) {
		guess_word = getche();
		printf("\n");
		for (i = 0; i < strlen(old_guess); i++) {
			if (old_guess[i] == guess_word) {
				status = 1;
				break;
			}
		}
		if (status != 1) {
			old_guess[j++] = guess_word;
			for (i = 0; i < strlen(fruit[choice - 1]); i++) {
				if (fruit[choice - 1][i] == guess_word) {
					check++;
					show[i] = guess_word;
				}
			}
		}
		for (i = 0; i < strlen(show); i++)
			printf("%c ", show[i]);
		printf("\n\n");
		status = 0;
	}
	printf("Congratulation , you win !!!\n");
}

/*
Hangman game
Please select choice 1-5 : 3
Please guess word
_ _ e _ _ _

c
c _ e _ _ _

s
c _ e _ _ _

o
c _ e _ _ _

h
c h e _ _ _

c
c h e _ _ _

y
c h e _ _ y

r
c h e r r y

Congratulation , you win !!!
*/