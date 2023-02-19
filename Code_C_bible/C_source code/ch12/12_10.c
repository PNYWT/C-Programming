#include <stdio.h>
#include <stdlib.h>

main() {
	struct subject{
		int subject_id;
		char subject_name[30];
	};
	struct subject sub[5]={0};

	int i;
	char tmp[10];

	printf("Welcome to system\n");
	printf("Please enter subject data\n");
	for(i=0;i<5;i++) {
		printf("Enter Subject Id : ");
		fgets(tmp,10,stdin);
		sub[i].subject_id = atoi(tmp);
		printf("Enter Subject Name : ");
		fgets(sub[i].subject_name,30,stdin);
	}

	printf("\nThese subject : \n");
	for(i=0;i<5;i++) {
		printf("%d\t%s",sub[i].subject_id,sub[i].subject_name);
	}
	printf("Already Add !!!\n");
}

/* result

Welcome to system
Please enter subject data
Enter Subject Id : 11111
Enter Subject Name : C Language
Enter Subject Id : 11112
Enter Subject Name : Operating system
Enter Subject Id : 11113
Enter Subject Name : Introduction to computer
Enter Subject Id : 11114
Enter Subject Name : Java programming
Enter Subject Id : 11115
Enter Subject Name : System analysis & Design

These subject :
11111   C Language
11112   Operating system
11113   Introduction to computer
11114   Java programming
11115   System analysis & Design
Already Add !!!

*/