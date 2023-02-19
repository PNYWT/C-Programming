#include <stdio.h>
#include <conio.h>
#include <process.h>

main() {
	FILE *fp1,*fp2;
	char ch;

	if((fp1=fopen("oneChar.dat","w"))==NULL) {
		printf("Cannot open file oneChar.dat for write\n");
		exit(1);
	}
	if((fp2=fopen("oneChar.dat","r"))==NULL) {
		printf("Cannot open file oneChar.dat for read\n");
		exit(1);
	}

	printf("Please enter one character : ");
	ch = getche();

	if(putc(ch,fp1)==EOF) {
		printf("Error to write data to file\n");
		exit(1);
	}

	printf("\nPlease enter one character : ");
	ch = getche();

	if(fputc(ch,fp1)==EOF) {
		printf("Error to write data to file\n");
		exit(1);
	}

	fclose(fp1);

	if((ch = getc(fp2))!=EOF)
		printf("\nFirst Character in text file is %c\n",ch);
	if((ch = fgetc(fp2))!=EOF)
		printf("Second character in text file is %c\n",ch);
	fclose(fp2);
}

/* result

Please enter one character : p
Please enter one character : v
First Character in text file is p
Second character in text file is v

*/