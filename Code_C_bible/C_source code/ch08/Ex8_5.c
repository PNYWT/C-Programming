#include <stdio.h>

main() {
    int count=0,sum=0;
    count+=2;
    while(count<=100) {
        sum = sum+count;
        count+=2;
    }
    printf("Summation between 1-100 is %d\n",sum);
}

/*
Summation between 1-100 is 2550
*/