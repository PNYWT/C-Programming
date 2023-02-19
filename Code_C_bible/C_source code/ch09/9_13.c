#include <stdio.h>
#include <string.h>

main() {
	char greeting[4][15] = {"Good Morning",
			"Good Afternoon",
			"Good Evening",
			"Good Night" };
	char time[6];
	int i,j;

	printf("Please insert time in format xx.xx\n");
	printf("e.g. 07.00 , 15.30 , 24.00 etc.\n");
	printf("What time is it? : ");
	fgets(time,6,stdin);

	while(time[2] != '.') {
		printf("Your time are wrong format , please try again\n");
		printf("Waht time is it? : ");
		fgets(time,6,stdin);
	}

	if(strcmp(time,"12.00") < 0) i=0;
	else if(strcmp(time,"17.00") < 0) i=1;
	else if(strcmp(time,"21.00") < 0) i=2;
	else i=3;

	for(j=0;j<strlen(greeting[i]);j++) {
		printf("%c",greeting[i][j]);
	}
}

/* result
# 1
Please insert time in format xx.xx
e.g. 07.00 , 15.30 , 24.00 etc.
What time is it? : 09.00
Good Morning

# 2
Please insert time in format xx.xx
e.g. 07.00 , 15.30 , 24.00 etc.
What time is it? : 16.00
Good Afternoon

# 3
Please insert time in format xx.xx
e.g. 07.00 , 15.30 , 24.00 etc.
What time is it? : 21.30
Good Night

# 4
Please insert time in format xx.xx
e.g. 07.00 , 15.30 , 24.00 etc.
What time is it? : 1.30
Wrong format , please try again
What time is it? : 01.30
Good Morning
*/