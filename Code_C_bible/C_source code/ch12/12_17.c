#include <stdio.h>
#include <stdlib.h>

struct phonebook getData();
void printData(struct phonebook);

struct phonebook {
    char name[10];
    char tel_num[10];
};

main() {
    struct phonebook phb;
    phb = getData();
    printData(phb);
}

struct phonebook getData() {
    struct phonebook phone;
    printf("Please add data\n");
    printf("Enter name : ");
    fgets(phone.name,10,stdin);
    printf("Enter tel number : ");
    fgets(phone.tel_num,10,stdin);
    return phone;
}

void printData(struct phonebook pb) {
    printf("\nData list\n");
    printf("Name : %s",pb.name);
    printf("Tel : %s\n",pb.tel_num);
    printf("Already Add !!!\n");
}

/* result

Please add data
Enter name : orapin 
Enter tel number : 021234567

Data list
Name : orapin
Tel : 021234567
Already Add !!!

*/