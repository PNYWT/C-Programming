#include <stdio.h>

main() {
	int num[2][3][4],i,j,k,count=0;
	for(i=0;i<2;i++) {
		for(j=0;j<3;j++) {
			for(k=0;k<4;k++) {
				++count;
				num[i][j][k] = count;
				printf("num[%d][%d][%d]=%d\t",i,j,k,num[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	printf("Array num[2][3][4] can keep %d values",count);
}

/* result
num[0][0][0] = 1	num[0][0][1] = 2	num[0][0][2] = 3	num[0][0][3] = 4
num[0][1][0] = 5	num[0][1][1] = 6	num[0][1][2] = 7	num[0][1][3] = 8
num[0][2][0] = 9	num[0][2][1] = 10	num[0][2][2] = 11	num[0][2][3] = 12

num[1][0][0] = 13	num[1][0][1] = 14	num[1][0][2] = 15	num[1][0][3] = 16
num[1][1][0] = 17	num[1][1][1] = 18	num[1][1][2] = 19	num[1][1][3] = 20
num[1][2][0] = 21	num[1][2][1] = 22	num[1][2][2] = 23	num[1][2][3] = 24

Array num[2][3][4] can keep 24 values
*/