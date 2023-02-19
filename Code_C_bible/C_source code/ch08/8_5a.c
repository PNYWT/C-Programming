#include <stdio.h>

main() {
   	int points;

   	printf("Please enter points : ");
   	scanf("%d", &points);
   	if(points >= 80) {
    	printf("Congratulations\n");
      	printf("C Language programming subject\n");
      	printf("You get grade A\n");
   	}
   	else 
      	if(points >= 70)
        	printf("You get grade B\n");
      	else 
        	if(points >= 60)
            	printf("You get grade C\n");
         	else 
            	if(points >= 50)
               		printf("You get grade D\n");
            	else
               		printf("You get grade F\n");
   printf("See you again! Next course");
}

/* result
# 1
Please enter points : 55
You get grade D
See you again ! Next course

# 2
Please enter points : 80
Congratulations
C Language programming subject
You get grade A
See you again ! Next course

# 3
Please enter points : 45
You get grade F
See you again ! Next course
*/