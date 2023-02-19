#include <stdio.h>
#include <math.h>
main() {
	int choice;
	printf("############################\n");
	printf("#   Please select choice   #\n");
	printf("############################\n");
	printf("# 1. Plus      (+)         #\n");
	printf("# 2. Minus     (-)         #\n");
	printf("# 3. Multiply  (*)         #\n");
	printf("# 4. Divide    (/)         #\n");
	printf("# 5. Power                 #\n");
	printf("############################\n");
	do{
		printf("\nSelect ( Please select choice 1-5 only ) : ");
		scanf("%d",&choice);
	}while (choice < 1 || choice > 5);
}

/* result
############################
#              Please select choice                  #
############################
#               1. Plus      (+)                        #
#               2. Minus     (-)                       #
#               3. Multiply  (*)                      #
#               4. Divide    (/)                       #
#               5. Power                               #
############################

	Select ( Please select choice 1-5 only ) : 0

	Select ( Please select choice 1-5 only ) : 7

	Select ( Please select choice 1-5 only ) :  10

	Select ( Please select choice 1-5 only ) :  3

*/

