#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
	char std_id[10];
	char name[10];
	int age;
}std;

main() {
	FILE *fp;
	int i;
	char tmp[80];

	if((fp=fopen("student.dat","w+b"))==NULL) {
		printf("Error to open file student.dat\n");
		exit(1);
	}

	printf("INPUT DATA");
	for(i=0;i<3;i++) {
		printf("\nEnter student id : "); fgets(std.std_id,10,stdin);
		printf("Enter name : "); fgets(std.name,10,stdin);
		printf("Enter age : "); fgets(tmp,80,stdin);
		std.age = atoi(tmp);
		fwrite(&std,sizeof(std),1,fp);
	}

	strcpy(std.std_id,""); strcpy(std.name,""); std.age=0;
	rewind(fp);
	printf("\nOUTPUT DATA");
	for(i=0;i<3;i++) {
		fread(&std,sizeof(std),1,fp);
		printf("\nStudent id : %s",std.std_id);
		printf("Name : %s",std.name);
		printf("Age : %d\n",std.age);
	}
	fclose(fp);
}

/* result

INPUT DATA
Enter student id	: 3364
Enter name : somsri
Enter age : 18

Enter student id	: 3365
Enter name : somsak
Enter age : 19

Enter student id	: 3366
Enter name : somchai
Enter age : 18

OUTPUT DATA
Student id	: 3364
Name : somsri
Age : 18

Student id	: 3365
Name : somsak
Age : 19

Student id	: 3366
Name : somchai
Age : 18

*/