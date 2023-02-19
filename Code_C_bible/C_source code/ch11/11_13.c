#include <stdio.h>
#include <ctype.h>

main() {
	printf("character is A , result of islower();");
	printf("function is %d\n",islower('A'));
	printf("character is A , result of isupper();");
	printf("function is %d\n\n",isupper('A'));
	
	printf("character is b , result of islower();");
	printf("function is %d\n",islower('b'));
	printf("character is b , result of isupper();");
	printf("function is %d\n\n",isupper('b'));
	
	printf("character is A , result of tolower();");
	printf("function is %c\n",tolower('A'));
	printf("character is A , result of toupper();");
	printf("function is %c\n\n",toupper('A'));
	
	printf("character is b , result of tolower();");
	printf("function is %c\n",tolower('b'));
	printf("character is b , result of toupper();");
	printf("function is %c\n",toupper('b'));
}

/* result
character is A , result of islower(); function is 0
character is A , result of isupper(); function is 4

character is b , result of islower(); function is 8
character is b , result of isupper(); function is 0

character is A , result of tolower(); function is a
character is A , result of toupper(); function is A

character is b , result of tolower(); function is b
character is b , result of toupper(); function is B
*/