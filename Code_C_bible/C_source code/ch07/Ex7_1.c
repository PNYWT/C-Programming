#include <stdio.h>
main() {
	printf("AAAAAAABBBBBBBCCCCCCC\n");
	printf("*********************\n");
	printf("%7d\n",11111);
	printf("%-7d\n",11111);
	printf("%07d\n\n\n\n",11111);
	printf("AAAAAAABBBBBBBCCCCCCC\n");
	printf("*********************\n");
	printf("%14d\n",11111);
	printf("%-14d\n",11111);
	printf("%014d\n\n\n\n",11111);
	printf("AAAAAAABBBBBBBCCCCCCC\n");
	printf("*********************\n");
	printf("%21d\n",11111);
	printf("%-21d\n",11111);
	printf("%021d\n\n\n\n",11111);
	printf("AAAAAAABBBBBBBCCCCCCC\n");
	printf("*********************\n");
	printf("%-021.2f\n",55.54321);
	printf("%021.2f\n",55.54321);
	printf("%21.2f\n\n\n\n",55.54321);
	printf("AAAAAAABBBBBBBCCCCCCC\n");
	printf("*********************\n");
	printf("%14f\n",55.54321);
	printf("%-14f\n\n\n\n",55.54321);
	printf("AAAAAAABBBBBBBCCCCCCC\n");
	printf("*********************\n");
	printf("%.3f\n",55.54321);
	printf("-%7.3f\n",55.54321);
	printf("%-7.3f\n",55.54321);
}