#include <stdio.h>

union menu {
    char food_list[30];
    int price;
};
union menu mn;

typedef union {
    char place[20];
    int num_branch;
} SHOP;

main() {
    SHOP sh;
    SHOP *ptsh = &sh;

    printf("Data area for keep menu list is %d bytes\n",sizeof(union menu));

    printf("Address of food_list = %p\n",&mn.food_list);
    printf("Address of price = %p\n",&mn.price);

    strcpy(mn.food_list,"Tom Yum Kung");
    mn.price = 70;
    printf("\t     *****MENU*****\n");
    printf("Food List\t\t\tPrice\n");
    printf("%s\t\t\t\t%d\n",mn.food_list,mn.price);

    strcpy(mn.food_list,"Papaya Pok Pok");
    printf("\t     *****MENU*****\n");
    printf("Food List\t\t\tPrice\n");
    printf("%s",mn.food_list);
    mn.price = 30;
    printf("\t\t\t%d\n",mn.price);

    strcpy(sh.place,"Ratchada Rd.");
    printf("\nPlace : %s",(*ptsh).place);
    (*ptsh).num_branch = 6;
    printf("\tNumber of Branch : %d\n",sh.num_branch);
}

/* result

Data area for keep menu list is 32 bytes
Address of food_list = 20b48
Address of price = 20b48
             *****MENU*****
Food List                       Price
F	                    70
             *****MENU*****
Food List                       Price
Papaya Pok Pok        30

Place : Ratchada Rd.    Number of Branch : 6

*/