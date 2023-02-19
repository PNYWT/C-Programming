#include <stdio.h>

main() {
	char name[20],birthday[11];
	int age;
	float weight;
	
	printf("Name : ");
	scanf("%s",name);
	printf("Age : ");
	scanf("%d",&age);
	printf("Birthday : ");
	scanf("%s",birthday);
	printf("Weight : ");
	scanf("%f",&weight);
	printf("########################################################\n");
	printf("# Name \t\t Age \t Birthday \t Weight        #\n");
	printf("########################################################\n");
	printf("# %s \t %d \t %s \t %.2f \t       #\n",name,age,birthday,weight);
	printf("########################################################");
}