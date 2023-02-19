#include <stdio.h>

main() {
    int a,c;
    int *b;
    int d[]={30,40};

    b = &a;
    *b = 10;
    c = *b;
    a = 20;
    printf("a  = %d, &a = %p\n",a,&a);
    printf("*b = %d, b  = %p\n",*b,b);
    printf("c  = %d\n\n",c);
    printf("d[0]   = %d, d = %p\n",d[0],d);
    printf("&d[0]  = %p, *d = %d\n",&d[0],*d);
    printf("*(d+1) = %d, (*d+1) = %d\n",*(d+1),(*d+1));
}

/* address of a : FF001100, address of d : FF001111
a  = 20, &a = FF001100
*b = 20, b  = FF001100
c  = 10

d[0]   = 30, d = FF001111
&d[0]  = FF001111, *d = 30
*(d+1) = 40, (*d+1) = 31
*/