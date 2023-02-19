#include <stdio.h>
#define THIS_YEAR 2022

main() {
   	int year;

   	printf("What year were you born? : ");
   	scanf("%d", &year);

   	if(year > THIS_YEAR) {
    	printf("Please insert year\n");
      	printf("Insert in C.E. format\n");
   	}
   	else {
    	year = THIS_YEAR - year;
      	printf("You are %d years old\n", year);
  	}
   	printf("Finish! Goodbye");
}

/* result
# 1
What year were you born? : 2532
Please insert year
Insert in C.E. format
Finish ! Goodbye

# 2
What year were you born? : 1991
You are 31 years old
Finish ! Goodbye
*/