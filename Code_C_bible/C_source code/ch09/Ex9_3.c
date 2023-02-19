#include <stdio.h>
#include <string.h>

main() {
        int dec_num,i=15;
        int bin_num[16]={0};

        printf("This Program will convert decimal number to binary number\n");
        printf("Please enter decimal number : ");
        scanf("%d",&dec_num);

        while(dec_num!=0) {
            bin_num[i] = dec_num%2;
            dec_num = dec_num/2;
            i--;
        }

        printf("Binary number is ");
        for(i=0;i<16;i++) {
            printf("%d",bin_num[i]);
        }
        printf("\n");
}

/*
This Program will convert decimal number to binary number
Please enter decimal number : 175
Binary number is 0000000010101111
*/