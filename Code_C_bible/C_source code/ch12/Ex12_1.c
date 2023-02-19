#include <stdio.h>

main() {
    struct employee {
        char emp_id[8];
        char name[20];
        char position[30];
        char dept[30];
        float salary;
    } emp[10] = {{"10000","Sa-art  ","IT Manager         ","IT-Planning",30000},
                {"10001","Sakol   ","Programmer         ","IT_Planning",13000},
                {"10002","Savitree","Admin              ","IT-Planning",10000},
                {"80001","Satid   ","User support       ","Support    ",11000},
                {"80002","Savinee ","Project Coordinator","IT-Planning",13000},
                {"80003","Saithip ","Admin              ","Support    ",10000},
                {"10003","Sartra  ","User Support       ","Support    ",11000},
                {"10004","Sasikarn","System Analyst     ","IT-Planning",15000},
                {"80004","Sasaluk ","System Analyst     ","IT-Planning",15000},
                {"10005","Samaporn","Programmer         ","IT-Planning",13000}};
    int i;

    printf("Temporary Employee\n");
    for(i=0;i<10;i++) {
        if(strcmp(emp[i].emp_id,"80000")>0)
            printf("%s\t%s\t%s\t%s\t%.2f\n",emp[i].emp_id,emp[i].name,emp[i].position,emp[i].dept,emp[i].salary);
    }
}

/*
Temporary Employee
80001   Satid           User support               Support          11000.00
80002   Savinee       Project Coordinator      IT-Planning     13000.00
80003   Saithip         Admin                       Support          10000.00
80004   Sasaluk        System Analyst          IT-Planning     15000.00
*/


