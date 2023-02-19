#include <stdio.h>
#include <string.h>

main() {
	char str[]="Hello ! C Language";
	char substr[]="C Lan";

	printf("String is %s\n",str);
	printf("After use strchr(); with character \"!\" , ");
	printf("String is %s\n",strchr(str,'!'));
	printf("After search string with substr \"C Lan\" , ");
	printf("String is %s\n",strstr(str,substr));
}

/* result
String is Hello ! C Language
After use strchr(); with character "!" , String is ! C Language
After search string with substr "C Lan" , String is C Language
*/