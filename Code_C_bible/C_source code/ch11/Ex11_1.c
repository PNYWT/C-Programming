#include <stdio.h>
int be;

int convertion(int ce) {
    be = ce+543;
    return be;
}
main() {
    int ce;
    printf("Please input Christian Era : ");
    scanf("%d",&ce);
    be = convertion(ce);
    printf("Buddhist Era is %d\n",be);
}


/*
Please input Christian Era : 2022
Buddhist Era is 2565
*/