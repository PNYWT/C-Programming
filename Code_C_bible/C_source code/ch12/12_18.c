#include <stdio.h>
#include <stdlib.h>

struct phonebook getData();
void printData(struct phonebook);

struct phonebook {
    char name[10];
    char tel_num[10];
};

main() {
    int i=0,num=2;
    char tmp[10];
    struct phonebook phb[5];

    do {
        printf("How many number do you want to add tel.no (Maximum:5) : ");
        fgets(tmp,10,stdin);
    } while(atoi(tmp) < 0 || atoi(tmp) > 5);
    num = atoi(tmp);
    printf("Please add data\n");
    for(i=0;i<num;i++) {
        phb[i] = getData();
    }
    printf("\nData list\n");
    for(i=0;i<num;i++) {
        printData(phb[i]);
    }
    printf("Already Add !!!\n");
}

struct phonebook getData() {
    struct phonebook phone;

    printf("Enter name : ");
    scanf("%s",&phone.name);
    printf("Enter tel number : ");
    scanf("%s",&phone.tel_num);
    return phone;
}

void printData(struct phonebook pb) {
    printf("%s\t%s\n",pb.name,pb.tel_num);
}

/* result

How many number do you want to add tel.no (Maximum:5) : 6
How many number do you want to add tel.no (Maximum:5) : 10
How many number do you want to add tel.no (Maximum:5) : 2
Please add data
Enter name : orapin
Enter tel number : 021234567
Enter name : im
Enter tel number : 017654321

Data list
orapin	021234567
im	017654321
Already Add !!!

*/