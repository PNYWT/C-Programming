#include <stdio.h>
#include <stdlib.h>

main() {
	FILE *fp;
	errno_t err;
	if ((err = fopen_s(&fp,"DATA.DAT","w")) != 0) {
		printf("Cannot open DATA.DAT\n");
		exit(1);
	}
	fclose(fp);
}