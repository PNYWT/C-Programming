#include <stdio.h>

main() {
	FILE *fp;
	int i;
	char ch;
	fp = fopen("textfile.txt","w");
	for(i=2;i<20;i++=2)
		fprintf(fp,"%3d",i);
	fclose(fp);
	fp = fopen("textfile.txt","r");
	while((ch=fgetc(fp)!=EOF)
		if(ch==' ') fputc('#',stdout);
		else if(ch!='1') fputc(ch,stdout);
		else {
			putchar('\n');
			putchar(ch);
		}
}

/*
data in textfile.txt
  2  4  6  8 10 12 14 16 18

result
##2##4##6##8#
10#
12#
14#
16#
18
*/