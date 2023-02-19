#include <stdio.h>
#include <process.h>

main() {
	FILE *fp;
	char a[]="Sorry";
	char buf[5]="";
	int i,count;

	if((fp=fopen("num.dat","w+b"))==NULL) {
		printf("Error to open file num.dat\n");
		exit(1);
	}
	count = fwrite(a,sizeof(char),3,fp);
	if(ferror(fp)) {
		printf("Error for write append data to file\n");
		exit(1);
	}
	rewind(fp);
	fread(buf,count,1,fp);
	if(ferror(fp)) {
		printf("Error for read data from file\n");
		exit(1);
	}
	for(i=0;i<count;i++) {
		printf("%c",buf[i]);
	}
}

/* result

Sor

*/