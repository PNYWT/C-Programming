#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main() {
	FILE* fp1, * fp2;
	errno_t err;
	char name[20], tel[10];
	char answer;
	char tmp;

	if ((err = fopen_s(&fp1, "phone.dat", "r")) != 0) {
		printf("Cannot open phonebook.dat for read\n");
		exit(1);
	}
	
	printf("*****PHONEBOOK*****\n");
	while ((fscanf_s(fp1, "%s %s", name, _countof(name), tel, _countof(tel))) != EOF) {
		printf("%s\t%s\n", name, tel);
	}
	fclose(fp1);

	if ((err = fopen_s(&fp2, "phone.dat", "a")) != 0) {
		printf("Cannot open phonebook.dat for write append\n");
		exit(1);
	}

	printf("\nDo you want to add data\n");
	printf("Yes(press Y) or No(press any key) : ");
	answer = getchar();

	if (answer == 'Y') {
		while (answer != 'E') {
			printf("\n\nEnter name : ");
			scanf_s("%s", name,20);
			// ตัด \n ออกจากข้อมูล
			scanf_s("%c", &tmp, 1);
			printf("Enter tel : ");
			scanf_s("%s", tel,10);
			// ตัด \n ออกจากข้อมูล
			scanf_s("%c", &tmp, 1);
			fprintf(fp2, "%s %s\n", name, tel);
			printf("Continue(press C) or Exit(press E) : ");
			scanf_s("%c", &answer, 1);
		}
		printf("\nAdd data complete\n");
	}
	else {
		exit(1);
	}
	fclose(fp2);
}

/* result

ครั้งที่ 1
*****PHONEBOOK*****
somying	027998000
somchai	022483399
somsak	023794242

Do you want to add data
Yes(press Y) or No(press any key) : Y

Enter name : somsri
Enter tel : 022365656
Continue(press C) or Exit(press E) : E
Add data complete

ครั้งที่ 2
*****PHONEBOOK*****
somying	027998000
somchai	022483399
somsak	023794242
somsri		022365656

Do you want to add data
Yes(press Y) or No(press any key) : Y

Enter name : somjai
Enter tel : 029999999
Continue(press C) or Exit(press E) : C

Enter name : somdej
Enter tel : 025555555
Continue(press C) or Exit(press E) : E
Add data complete

ครั้งที่ 3
*****PHONEBOOK*****
somying	027998000
somchai	022483399
somsak	023794242
somsri		022365656
somjai		029999999
somdej		025555555

Do you want to add data
Yes(press Y) or No(press any key) : y

*/