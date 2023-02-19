#include <stdio.h>

main() {
    struct minimart {
        char product_code[10];
        char product_name[20];
        int product_number;
        float product_price;
    };

    struct minimart mm = {"012-85-79","seafood",30,369.50};
    struct minimart *ptmm;
	
    ptmm = &mm;

    printf("Product code	: %s\t",mm.product_code);
    printf("%s\t %s\n",(*ptmm).product_code,ptmm->product_code);
    printf("Product name	: %s\t",mm.product_name);
    printf("%s\t\t %s\n",(*ptmm).product_name,ptmm->product_name);
    printf("Product number	: %d\t\t",(*ptmm).product_number,ptmm->product_number);
    printf("%d\t\t %d\n",(*ptmm).product_number,ptmm->product_number);
    printf("Product price	: %.2f\t",mm.product_price);
    printf("%.2f\t\t %.2f\n",(*ptmm).product_price,ptmm->product_price);
}

/* result

Product code  	: 012-85-79       	012-85-79	012-85-79
Product name 	: seafood		seafood		seafood
Product number	: 30		30		30
Product price	: 369.50		369.50		369.50

*/