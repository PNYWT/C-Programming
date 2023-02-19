#include <stdio.h>

void codition(){
    int age;
    printf("Enter your age : ");
    scanf("%d", &age);
    if (age <= 50) {
        printf("Alive");
    }else{
        printf("Maybe die.");
    }
}

int main(){
    codition();
}