/* testMacro.c */
#include <stdio.h>

#define WHERE_MACRO1 printf("In file %s , Macro WHERE_MACRO1 display at line %d\n",\
							__FILE__,__LINE__)
#define WHERE_MACRO2 printf("In file %s , Macro WHERE_MACRO2 display at line %d\n",\
							__FILE__,__LINE__); \
					 printf("Print this result on %s\n",__DATE__); \
					 printf("__STDC__ %d\n",__STDC__); \
					 printf("__STDC_VERSION__ %d\n",__STDC_VERSION__);

main()
{
    WHERE_MACRO1;
    WHERE_MACRO2;
}

/* result

In file D:\project\main.c , Macro WHERE_MACRO1 display at line 14
In file D:\project\main.c , Macro WHERE_MACRO2 display at line 15
Print this result on Dec 10 2021
__STDC__ 1
__STDC_VERSION__ 201710

*/
