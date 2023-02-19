#include <stdio.h>

void merryXmas(void) {
        int x,y,z,space=4,check=0;
        for(x=1;x<=9;x+=2) {
                for(y=1;y<=x;y++) {
                        if(check==0) {
                                for(z=1;z<=space;z++) {
                                        printf(" ");
                                }
                                printf("*");
                                check=1;
                        }
                        else {
                                printf("*");
                        }
                }
                printf("\n");
                space--;
                check=0;
        }
        printf("   ***\n");
        printf("   ***\n");
}

main() {
	printf("Merry X'Mas For You\n");
    	merryXmas();
	printf("Wishing you happiness :)\n");
    	printf("\t\t From Santa hohoho\n");
}

/* result
Merry X'Mas For You
       *   
     ***
   *****
 *******
*********
     ***
	 ***
Wishing you happiness :)
		From Santa hohoho
*/