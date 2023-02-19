#include <stdio.h>
#include <stdlib.h>

main() {
    struct x {
        int a;
        char b[10];
        float c;
    };

    struct y {
        struct x a1;
        struct x a2;
    };

    struct y b1 = {1,"first",1.1};
    struct y *ptr;

    char tmp[80];

    printf("Enter a : ");
    fgets(tmp,80,stdin);
    b1.a2.a = atoi(tmp);
    printf("Enter b : ");
    fgets(b1.a2.b,10,stdin);
    printf("Enter c : ");
    fgets(tmp,80,stdin);
    b1.a2.c = atof(tmp);

    ptr = &b1;
    printf("First data package\n");
    printf("a = %d\n",ptr->a1.a);
    printf("a = %d\n",b1.a1.a);
    printf("b = %s\n",ptr->a1.b);
    printf("b = %s\n",b1.a1.b);
    printf("c = %.2f\n",ptr->a1.c);
    printf("c = %.2f\n",b1.a1.c);
    printf("Second data package\n");
    printf("a = %d\n",ptr->a2.a);
    printf("a = %d\n",b1.a2.a);
    printf("b = %s",ptr->a2.b);
    printf("b = %s",b1.a2.b);
    printf("c = %.2f\n",ptr->a2.c);
    printf("c = %.2f\n",b1.a2.c);
}

/* result

Enter a : 3
Enter b : second
Enter c : 6.6
First data package
a = 1
a = 1
b = first
b = first
c = 1.10
c = 1.10
Second data package
a = 3
a = 3
b = second
b = second
c = 6.60
c = 6.60

*/