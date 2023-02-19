#include <stdio.h>

main() {
        typedef struct {
                int a;
                char b;
                float c;
                char d[4];
        } TEST;
        TEST t1 = {1,'A',1.1,"AAA"};
        TEST t2 = {2,'B',2.2,"BBB"};

        printf("Test copy struct\n");
        printf("Before copy\n");
        printf("t1.a=%d\t t1.b=%c\t t1.c=%f\t t1.d=%s\n",t1.a,t1.b,t1.c,t1.d);
        printf("t2.a=%d\t t2.b=%c\t t2.c=%f\t t2.d=%s\n\n",t2.a,t2.b,t2.c,t2.d);

        t2 = t1;

        printf("After copy t1 to t2\n");
        printf("t1.a=%d\t t1.b=%c\t t1.c=%f\t t1.d=%s\n",t1.a,t1.b,t1.c,t1.d);
        printf("t2.a=%d\t t2.b=%c\t t2.c=%f\t t2.d=%s\n",t2.a,t2.b,t2.c,t2.d);
}

/* result

Test copy struct
Before copy
t1.a=1   t1.b=A  t1.c=1.100000   t1.d=AAA
t2.a=2   t2.b=B  t2.c=2.200000   t2.d=BBB

After copy t1 to t2
t1.a=1   t1.b=A  t1.c=1.100000   t1.d=AAA
t2.a=1   t2.b=A  t2.c=1.100000   t2.d=AAA

*/