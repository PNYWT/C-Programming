#include <stdio.h>
#include <stdlib.h>

main() {
        typedef struct {
                int roomno;
                char ownername[10];
                float price;
        } RENTROOM;
        RENTROOM rr;

        char temp_data[80];

        printf("Please input data\n");
        printf("Enter room no : ");
        fgets(temp_data,80,stdin);
        rr.roomno = atoi(temp_data);

        printf("Enter owner name : ");
        fgets(temp_data,80,stdin);
        strcpy(rr.ownername,temp_data);

        printf("Enter price : ");
        fgets(temp_data,80,stdin);
        rr.price = atof(temp_data);

        printf("\nRent room data\n");
        printf("Room no : %d [%.2f Baht]\n",rr.roomno,rr.price);
        printf("Owner name : %s\n",rr.ownername);
}

/* result

Please input data
Enter room no : 2456
Enter owner name : Orapin
Enter price : 5000

Rent room data
Room no : 2456 [5000.00 Baht]
Owner name : Orapin

*/