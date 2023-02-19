#include <stdio.h>
#include <stdlib.h>

main() {
	FILE *fp;
	fp = fopen("DATA.DAT","w");
	if(fp == NULL) {
		printf("Cannot open DATA.DAT\n");
		exit(1);
	}
	fclose(fp);
}