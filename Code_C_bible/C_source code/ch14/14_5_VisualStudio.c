#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main() {
	FILE *fp1, *fp2;
	errno_t err;
	char ch,tmp;

	if ((err = fopen_s(&fp1, "oneChar.dat", "w")) != 0) {
		printf("Cannot open oneChar.dat for write\n");
		exit(1);
	}
		
	printf("Please enter one character : ");
	scanf_s("%c", &ch, 1);
	scanf_s("%c", &tmp, 1);
	
	if (putc(ch, fp1) == EOF) {
		printf("Error to write data to file\n");
		exit(1);
	}

	printf("Please enter one character : ");
	scanf_s("%c", &ch, 1);

	if (fputc(ch, fp1) == EOF) {
		printf("Error to write data to file\n");
		exit(1);
	}

	fclose(fp1);

	if ((err = fopen_s(&fp2, "oneChar.dat", "r")) != 0) {
		printf("Cannot open oneChar.dat for read\n");
		exit(1);
	}

	if ((ch = getc(fp2)) != EOF)
		printf("\nFirst Character in text file is %c\n", ch);
	if ((ch = fgetc(fp2)) != EOF)
		printf("Second character in text file is %c\n", ch);
	fclose(fp2);
}

/* result

Please enter one character : p
Please enter one character : v
First Character in text file is p
Second character in text file is v

*/
