#include <stdio.h>
#include <string.h>

main() {
	char str1[] = "Prolog Language";
	char str2[] = "Pascal Language";
	char str3[] = "Prolog Language";
	char *ch;
	int ret;

	printf("str1 is %s\n",str1);
	printf("str2 is %s\n",str2);
	printf("str3 is %s\n\n",str3);

	ch = (char *)memcpy(str1,str2,strlen(str2));
	printf("********** memcpy(); **********\n");
	if(ch)
		printf("Now !!! str1 is %s\n\n",str1);
	else
		printf("Cannot copy string with memcpy\n\n");

	ch = (char *)memmove(str1,str3,strlen(str3));
	printf("********** memmove(); **********\n");
	if(ch)
		printf("Now !!! str1 is %s\n\n",str1);
	else
		printf("Cannot copy string with memmove\n\n");

	ret = memcmp(str1,str2,strlen(str1));
	printf("********** memcmp(); **********\n");
	printf("Compare str1 with str2 , return value = %d\n",ret);
	printf("str1 is %s str2\n",(ret==0) ? "equal" : "not equal");
	ret = memcmp(str1,str3,strlen(str1));
	printf("Compare str1 with str3 , return value = %d\n",ret);
	printf("str1 is %s str3\n\n",(ret==0) ? "equal" : "not equal");

	ch = (char *)memchr(str1,'l',strlen(str1));
	printf("********** memchr(); **********\n");
	printf("Search str1 with \'l\' Character , Result is %s\n\n",ch);

	memset(str1,'C',6);
	printf("********** memset(); **********\n");
	printf("Now !!! str1 is set to %s\n",str1);
}

/* result
str1 is Prolog Language
str2 is Pascal Language
str3 is Prolog Language

********** memcpy(); **********
Now !!! str1 is Pascal Language

********** memmove(); **********
Now !!! str1 is Prolog Language

********** memcmp(); **********
Compare str1 with str2 , return value = 17
str1 is not equal str2
Compare str1 with str3 , return value = 0
str1 is equal str3

********** memchr(); **********
Search str1 with 'l' Character , Result is Log Language

********** memset(); **********
Now !!! str1 is set to CCCCCC Language
*/