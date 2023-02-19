#include <stdio.h>

main() {
	int n;

	printf("Please enter number of element : ");
	scanf("%d",&n);
	
	int number[n];
	int i;
	
	printf("Please input all number\n");
	for(i=0; i<n; i++) {
		printf("Number %d : ",i+1);
		scanf("%d", &number[i]);
	}
	
	printf("\nReverse all number\n");
	for(i=n-1; i>=0; i--) {
		printf("%d \n", number[i]);
	}
}