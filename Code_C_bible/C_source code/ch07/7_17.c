#include <stdio.h>

main() {
   char greeting_words[20];

   printf("Enter your greeting words : ");
   scanf("%19[^\n]", greeting_words);
   //scanf("%[^\n]", greeting_words);
   printf("%s\n", greeting_words);
}

/*
result
Enter your greeting words : Hello, how are you today?
Hello, how are you
*/