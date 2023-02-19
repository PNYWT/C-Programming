#include <stdio.h>

main() {
   	int age;

   	printf("How old are you? : ");
   	scanf("%d", &age);
   	if(age < 18) {
    	printf("You are less than 18 years old\n");
      	printf("You are young\n");
   	}
   	printf("You are %d years old", age);
}

/* result
# 1
How old are you? : 15
You are less than 18 years old
You are young
You are 15 years old

# 2
How old are you? : 18
You are 18 years old
*/