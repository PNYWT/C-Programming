#include <stdio.h>
#include <stdlib.h>

main() {
	FILE* fp1, * fp2;
	errno_t err;
	int number;

	if ((err = fopen_s(&fp1, "file1.txt", "r")) != 0) {
		printf("Cannot open file1.txt \n");
		exit(1);
	}
	if ((err = fopen_s(&fp2, "file2.txt", "w")) != 0) {
		printf("Cannot open file2.txt \n");
		exit(1);
	}
	while ((fscanf_s(fp1, "%d", &number)) != EOF) {
		fprintf(fp2, "%d\n", number);
	}
	printf("File copy complete\n");
	fclose(fp1);
	fclose(fp2);
}


/* result

	File copy complete

*/