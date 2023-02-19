/*testMacro2.c */

#include <stdio.h>

main() {
        int ret;
        
        printf("This is %s program\n",__FILE__);
        printf("Time to run this program is %s\n",__TIME__);
        ret = __STDC__;
        if(ret==1)
                printf("RUN BY STANDARD ISO/ANSI C\n");
        else
                printf("DON\'T RUNS BY STANDARD ISO/ANSI C\n");
}

/*result :   
This is D:\project\testMacro2.c program
Time to run this program is 07:51:38
RUN BY STANDARD ISO/ANSI C
 */