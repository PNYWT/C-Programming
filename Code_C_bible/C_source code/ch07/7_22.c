#include <stdio.h>

main() {
   char name[10],greeting[25] = "Welcome to C Language";
   puts("What's your name?");
   fgets(name,10,stdin);
   printf("Hi %s\n", name);
   puts(greeting);
}

/* result
What's your name?
Chibi Maruko
Hi Chibi Mar
Welcome to C Language
*/