#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

main() {
	int std1_math,std1_eng,std1_chem,std1_phy,std1_com;
	int std2_math,std2_eng,std2_chem,std2_phy,std2_com;
	int std3_math,std3_eng,std3_chem,std3_phy,std3_com;

	printf("Please input score in same line order by subject\n");
	printf("Subject => Mathematics English Chemical Physical Computer\n");
	printf("For example => student A : 50 60 70 80 90\n");
	printf("Student 1 : ");
	scanf("%d %d %d %d %d",&std1_math,&std1_eng,&std1_chem,&std1_phy,&std1_com);
	printf("Student 2 : ");
	scanf("%d %d %d %d %d",&std2_math,&std2_eng,&std2_chem,&std2_phy,&std2_com);
	printf("Student 3 : ");
	scanf("%d %d %d %d %d",&std3_math,&std3_eng,&std3_chem,&std3_phy,&std3_com);

	printf("\nTotal score\n");
	printf("Student 1 : %d\n",std1_math+std1_eng+std1_chem+std1_phy+std1_com);
	printf("Student 2 : %d\n",std2_math+std2_eng+std2_chem+std2_phy+std2_com);
	printf("Student 3 : %d\n",std3_math+std3_eng+std3_chem+std3_phy+std3_com);
}

/*
Please input score in same line order by subject
Subject => Mathematics English Chemical Physical Computer
For example => student A : 50 60 70 80 90
Student 1 : 65 70 80 85 90
Student 2 : 75 60 79 83 57
Student 3 : 97 65 81 69 79

Total score
Student 1 : 390
Student 2 : 354
Student 3 : 391
*/