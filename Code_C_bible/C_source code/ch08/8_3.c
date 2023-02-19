#include <stdio.h>
   
main(){
   	int points;

   	printf("Please enter points : ");
   	scanf("%d", &points);
   
   	if(points >= 50)
    	printf("Pass exam...Congratulations\n");   
   	else
      	printf("Fail...Attempt again\n");

   	printf("Bye bye...see you again next semester");
}

/* result
# 1
Please enter points : 49
Fail ... Attempt again
Bye bye ... see you again next semester

# 2
Please enter points : 79
Pass exam ... Congratulations
Bye bye ... see you again next semester
*/