#include <stdio.h>
#include <stdlib.h>

main() {
	FILE *fp1,*fp2;
	char subject_id[7],subject_name[50];
	char check;
	if((fp1=fopen("subject.txt","r"))!=NULL) {
		printf("SUBJECT DESCRIPTION\n");
		while((fscanf(fp1,"%s %[^\n]",&subject_id,&subject_name))!=EOF) {
			printf("%s %s\n",subject_id,subject_name);
		}
	}
	else {
		printf("SUBJECT DESCRIPTION\n");
	}

	if((fp2=fopen("subject.txt","a"))==NULL) {
		printf("Cannot open subject.txt\n");
		exit(1);
	}

	printf("\nDo you want to add subject\n");
	printf("Yes(press Y) or No(press any key) : ");
	check = getche();

	char temp;
	if(check=='Y') {
		while(check!='E') {
			printf("\n\nEnter subject id : ");
			fgets(subject_id,7,stdin);
			fflush(stdin);
			printf("Enter subject name : ");
			fgets(subject_name,50,stdin);
			fprintf(fp2,"%s %s",subject_id,subject_name);
			printf("Continue(press any key) or Exit(press E) : ");
			check = getche();
		}
		printf("\nAdd subject complete\n");
	}
	else {
		exit(1);
	}
	fclose(fp1);
	fclose(fp2);
}

/*
SUBJECT DESCRIPTION
123456	c
111111	java
222222	computer
333333	software
444444	hardware
555555	management

Do you want to add subject
Yes(press Y) or No(press any key) : Y

Enter subject id : 666666
Enter subject name : mis
Continue(press any key) or Exit(press E) : E
Add subject complete
*/