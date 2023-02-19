#include <complex.h> 
#include <stdio.h>

main()
{   
    float b = -4.5;
    float c = 2;
    _Fcomplex a = { b,c };
    printf("Real number is %f\n", crealf(a));
    printf("Imaginary number is %f", cimagf(a));
}

/*
Real number is -4.500000
Imaginary number is 2.000000
*/