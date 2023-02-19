#include <stdio.h>

main() {
	int number;
	printf("Guess number : ");
	scanf("%d",&number);
	while(number != 3) {
		printf("You are wrong! try again\n");
		printf("Guess number : ");
		scanf("%d",&number);
	}
	printf("You win! Congratulations\n");
}

/* result
Guess number : 5
You are wrong! try again
Guess number : 7
You are wrong! try again
Guess number : 2
You are wrong! try again
Guess number : 3
You win! Congratulations
*/