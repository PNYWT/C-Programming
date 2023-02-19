#include <stdio.h>

main() {
	char data[9]="Computer" , data2[9]="Keyboard";
	char *p=data;

	printf("Now,First element of data variable inside at address %p\n",&data[0]);
	printf("Now,First element of data2 variable inside at address %p\n",&data2[0]);
	printf("\nAssign p=data;\n");
	printf("Pointer p point to data variable at address %p\n",p);
	printf("and pointer p point to '%c' character\n",*p);

	p = data2;

	printf("\nAfter change pointer p point to data2 variable ( assign p=data2; )\n");
	printf("Pointer p point to data2 variable at address %p\n",p);
	printf("and pointer p point to '%c' character\n",*p);
}

/* result
Now,First element of data variable inside at address FFEC
Now,First element of data2 variable inside at address FFE2

Assign p=data;
Pointer p point to data variable at address FFEC
and pointer p point to 'C' character

After change pointer p point to data2 variable ( assign p=data2; )
Pointer p point to data2 variable at address FFE2
and pointer p point to 'K' character
*/