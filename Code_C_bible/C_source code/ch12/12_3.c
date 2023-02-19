#include <stdio.h>

struct test {
    int a;
    char b;
    float c;
    char d[10];
};
struct test t1,t2,t3;

void print(void);

main() {
    printf("Structure Test\n");
    t1.a = 1;       t1.b = 'A';     t1.c = 1.1;     strcpy(t1.d,"AAA");
    t2.a = 2;       t2.b = 'B';     t2.c = 2.2;     strcpy(t2.d,"BBB");
    t3.a = 3;       t3.b = 'C';     t3.c = 3.3;     strcpy(t3.d,"CCC");
    print();
}

void print(void) {
    printf("a1 = %d\t b1 = %c\t c1 = %.1f\t d1 = %s\n",t1.a,t1.b,t1.c,t1.d);
    printf("a2 = %d\t b2 = %c\t c2 = %.1f\t d2 = %s\n",t2.a,t2.b,t2.c,t2.d);
    printf("a3 = %d\t b3 = %c\t c3 = %.1f\t d3 = %s\n",t3.a,t3.b,t3.c,t3.d);
}

/* result

Structure Test
a1 = 1   b1 = A  c1 = 1.1        d1 = AAA
a2 = 2   b2 = B  c2 = 2.2        d2 = BBB
a3 = 3   b3 = C  c3 = 3.3        d3 = CCC

*/