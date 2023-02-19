#include <stdio.h>
#include <stdlib.h>

main() {
	FILE *fp1,*fp2;
	int number;

	if((fp1=fopen("file1.txt","r"))==NULL) {
		printf("Cannot open file1.txt\n");
		exit(1);
	}
	if((fp2=fopen("file2.txt","w"))==NULL) {
		printf("Cannot open file2.txt\n");
		exit(1);
	}
	while((fscanf(fp1,"%d",&number))!=EOF) {
		fprintf(fp2,"%d\n",number);
	}
	printf("File copy complete\n");
	fclose(fp1);
	fclose(fp2);
}

/* result

File copy complete

*/