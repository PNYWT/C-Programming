#include <stdio.h>

long int factorial(int num);

void main() {
    int num;
    long int fac;

    printf("Please enter number of factorial : ");
    scanf("%d", &num);
    fac = factorial(num);
    printf("Result of %d! is %ld\n", num, fac);
}

long int factorial(int num) {
    if (num == 1) return 1;
    else return num * factorial(num-1);
}

/*
Please enter number of factorial : 3
Result of 3! is 6
*/