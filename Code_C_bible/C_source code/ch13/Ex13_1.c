#include <stdio.h>

#define NUM 2
#define DEF1 NUM+NUM*3
#define DEF2 (NUM+NUM*3)
#define DEF3 ((NUM+NUM)*3)

main() {
    printf("DEF1=%d\n",3*DEF1);
    printf("DEF2=%d\n",3*DEF2);
    printf("DEF3=%d\n",3*DEF3);
}

/*
DEF1=12
DEF2=24
DEF3=36
*/