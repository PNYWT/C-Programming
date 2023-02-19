#include <stdio.h>

struct info {
    int a;
    char b;
    float c;
    char d[10];
};

void print(struct info *ptinfo) {
    printf("a=%d\n",ptinfo->a);
    printf("b=%c\n",ptinfo->b);
    printf("c=%.1f\n",ptinfo->c);
    printf("d=%s\n",ptinfo->d);
}

main() {
    struct info in = {1,'A',1.1,"AAA"};
    struct info *ptin;

    printf("Value of structure info\n");
    ptin = &in;
    print(ptin);
}


/* result

Value of structure info
a=1
b=A
c=1.1
d=AAA

*/