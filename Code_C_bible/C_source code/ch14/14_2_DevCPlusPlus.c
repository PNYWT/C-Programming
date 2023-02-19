#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

main() {
	FILE *fp;
	char filename[20];
	int a=0;
	char b='\0';

	printf("Enter filename for keep data : ");
	scanf("%s",filename);
	if((fp = fopen(filename,"w+"))==NULL) {
		printf("Cannot open file %s\n",filename);
		exit(1);
	}
	fscanf(fp,"%d %c",&a,&b);
	printf("Your old data is %d and %c\n\n",a,b);
	printf("Enter integer : ");
	scanf("%d",&a);
	printf("Enter character : ");
	b = getche();
	a+=1; b+=1;
	fprintf(fp,"%d %c\n",a,b);
	printf("\nYour new data %d and %c already add to file %s\n",a,b,filename);
	fclose(fp);
}

/* result
Enter filename for keep data : test.txt
Your old data is 0 and o

Enter integer : 66
Enter character : m
Your new data 67 and n already add to file test.txt
*/