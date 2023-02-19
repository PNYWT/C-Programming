#include <complex.h> 
#include <stdio.h>

main()
{
    float complex num1 = -4.5 + 2 * I;
    float complex num2 = 9 + 3 * I;
    float complex num3;
    
    num3 = num1+num2;
    
    printf("num3 is %f+%fI", creal(num3),cimag(num3));
}

/*
num3 is 4.500000+5.000000I
*/