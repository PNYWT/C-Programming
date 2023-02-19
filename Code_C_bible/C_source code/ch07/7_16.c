#include <stdio.h>

main() {
   char name[10];
   int age;
 
   printf("Enter your name : ");
   scanf("%[^\n]", name);
   //scanf("%s", name);
   printf("Enter your age : ");
   scanf("%d", &age);
   printf("Your name is %s, age %d years\n", name, age);
}

/*
result :
Enter your name : Manee Jaidee
Enter your age : 10
Your name is Manee Jaidee, age 10 years

*/