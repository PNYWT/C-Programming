#include <stdio.h>

main() {
    struct test1 {
        int a;
        long b;
        float c;
    }t1;

    union test2 {
        int a;
        long b;
        float c;
    }t2;
        
    t1.a=1;
    t1.b=2;
    t1.c=3.3;

    t2.a=4;
    t2.b=5;
    t2.c=6.6;

    printf("%d %ld %.2f\n",t1.a,t1.b,t1.c);
    printf("%d %ld %.2f\n",t2.a,t2.b,t2.c);

    t2.a=7;
    printf("%d ",t2.a);
    t2.b=8;
    printf("%ld ",t2.b);
    t2.c=9.9;
    printf("%.2f\n",t2.c);
}

/* result

1 2 3.30
1087583027 1087583027 6.60
7 8 9.90

*/