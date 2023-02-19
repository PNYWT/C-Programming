#include <stdio.h>
#include <stdlib.h>

main() {
        struct tmp {
                int a;
                float b;
                char c[10],cc[10];
                char d;
        } t;
        char tmp_data[80];

        printf("Input Data\n");
        printf("Enter a (integer) : ");
        fgets(tmp_data,80,stdin);
        t.a = atoi(tmp_data);

        printf("Enter b (float)   : ");
        fgets(tmp_data,80,stdin);
        t.b = atof(tmp_data);

        printf("Enter c (string)  : ");
        fgets(tmp_data,80,stdin);
        strcpy(t.c,tmp_data);

        printf("Enter cc (string) : ");
        fgets(t.cc,10,stdin);

        printf("Enter d (char)    : ");
        t.d = getchar();

        printf("\nOutput Data\n");
        printf("Value of a  is %d\n",t.a);
        printf("Value of b  is %.2f\n",t.b);
        printf("Value of c  is %s",t.c);
        printf("Value of cc is %s",t.cc);
        printf("Value of d  is %c",t.d);
}

/* result

Input Data
Enter a (integer) : 1
Enter b (float)   : 3.3
Enter c (string)  : computer
Enter cc (string) : science
Enter d (char)    : m

Output Data
Value of a  is 1
Value of b  is 3.30
Value of c  is computer
Value of cc is science
Value of d  is m

*/