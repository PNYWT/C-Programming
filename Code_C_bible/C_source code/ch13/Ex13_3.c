#include <stdio.h>

#ifndef A
        #define A 3
        #define B 6
#endif

#ifdef B
        #define B 7
        #define C 6
#endif

#define D(int E) E-1
#define F(G) G

int update(num) {
        num = num*num+num-2;
}

main() {
    int number=5;
    number = update(number);
    printf("%d\n",A);
    printf("%d\n",B);
    printf("%d\n",C);
    printf("%d\n",3*D(2));
    printf("%d\n",F);
    printf("%d\n",number);
}

/*
#include <stdio.h>

#ifndef A
        #define A 3
        #define B 6
#endif

#ifdef B
        #undef B
        #define B 7
        #define C 6
#endif

#define D(E) (E-1)
#define F(G) G

int update(int num) {
        num = num*num+num-2;
        return num;
}

main() {
        int number=5;
        number = update(number);
        printf("%d\n",A);
        printf("%d\n",B);
        printf("%d\n",C);
        printf("%d\n",3*D(2));
        printf("%d\n",F(3));
        printf("%d\n",number);
}

3
7
6
3
3
28
*/