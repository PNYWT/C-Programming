#include <stdio.h>
#include <conio.h>

main() {
	char c1,c2,c3,c4,c5;
    printf("Enter 5 Character : ");
	c1 = getche();
	c2 = getche();
	c3 = getche();
	c4 = getche();
	c5 = getchar();
	printf("After convert : ");
	putchar(c1);
	putchar(c2+1);
	putchar(c3);
	putchar(c4+1);
	putchar(c5);
}

/* 
Enter 5 Character : abcde
After convert : accee

Enter 5 Character : aacce
After convert : abcde
*/
