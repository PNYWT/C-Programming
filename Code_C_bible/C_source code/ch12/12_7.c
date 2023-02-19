#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main() {
	struct book {
		char ISBN[15];
		char bookname[20];
		int price;
	} bk1={0},bk2={0};

	char tmp[5];

	printf("Enter ISBN : ");
	fgets(bk1.ISBN,15,stdin);
	printf("Enter bookname : ");
	fgets(bk1.bookname,20,stdin);
	printf("Enter price : ");
	fgets(tmp,5,stdin);
	bk1.price = atoi(tmp);

	printf("\nBefore\n");
	printf("bk2.ISBN=%s\n",bk2.ISBN);
	printf("bk2.bookname=%s\n",bk2.bookname);
	printf("bk2.price=%d\n",bk2.price);
	bk2 = bk1;
	printf("\nAfter\n");
	printf("bk2.ISBN=%s",bk2.ISBN);
	printf("bk2.bookname=%s",bk2.bookname);
	printf("bk2.price=%d",bk2.price);
}

/* result

Enter ISBN : 264-95-797-6
Enter bookname : C Programming
Enter price : 250

Before
bk2.ISBN=
bk2.bookname=
bk2.price=0

After
bk2.ISBN=264-95-797-6
bk2.bookname=C Programming
bk2.price=250

*/