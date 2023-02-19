#include <stdio.h>

main() {
    int test_score[2][5][5]={0};
    int total_score[5]={0};
    int i,j;

    /* variable i for check midterm and final */
    for(i=0;i<2;i++) {
        if(i==0) printf("Midterm test score\n");
        else printf("Final test score\n");
        printf("Please input Test1-Test5 scores e.g. 8 7 10 5 9\n");
        /* variable j for check test1 to test5 */
        for(j=0;j<5;j++) {
            do {
                if(test_score[i][j][0]>10 || test_score[i][j][1]>10 || 
                   test_score[i][j][2]>10 || test_score[i][j][3]>10 || 
	               test_score[i][j][4]>10)
                  	printf("Each test score not over 10\n");
                printf("Student %d score : ",j+1);
                scanf("%d %d %d %d %d",&test_score[i][j][0],&test_score[i][j][1],
				&test_score[i][j][2],&test_score[i][j][3],
				&test_score[i][j][4]);
            } while(test_score[i][j][0]>10 || test_score[i][j][1]>10 || 
	                test_score[i][j][2]>10 || test_score[i][j][3]>10 || 
	                test_score[i][j][4]>10);
            total_score[j] = total_score[j]+test_score[i][j][0]+
                                   test_score[i][j][1]+test_score[i][j][2]+
		       test_score[i][j][3]+test_score[i][j][4];
        }
        printf("\n\n");
    }
    printf("Total test score\n");
    for(j=0;j<5;j++) {
        printf("Student%d : %d\n",j+1,total_score[j]);
    }
}


/*
Midterm test score
Please input Test1-Test5 scores e.g. 8 7 10 5 9
Student 1 score : 1 1 1 1 1
Student 2 score : 22 2 2 2 2
Each test score not over 10
Student 2 score : 2 2 2 2 2
Student 3 score : 3 3 3 3 3
Student 4 score : 44444
4
4 44
4
Each test score not over 10
Student 4 score : 4 4 4 4 4
Student 5 score : 5 5 5 5 5


Final test score
Please input Test1-Test5 scores e.g. 8 7 10 5 9
Student 1 score : 1 1 1 1 1
Student 2 score : 2 2 2 2 2
Student 3 score : 3 3 3 3 3
Student 4 score : 4 4 4 4 4
Student 5 score : 5 5 5 5 5


Total test score
Student1 : 10
Student2 : 20
Student3 : 30
Student4 : 40
Student5 : 50
*/