#include <stdio.h>

main() {
	char c;
	do {
		c = getchar();
		putchar(c);
	} while(c != 'E');
}

/* result
a
a
b
b
c
c
d
d
e
e
D
D
E
E
*/
