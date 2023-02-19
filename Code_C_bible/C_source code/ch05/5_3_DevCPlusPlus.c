#include <complex.h> 
#include <stdio.h>

main()
{
    float complex a;
    a = -4.5 + 2 * I;
    printf("Real number is %f\n", creal(a));
    printf("Imaginary number is %f", cimag(a));
}

/*
Result :
Real number is -4.500000
Imaginary number is 2.000000
*/