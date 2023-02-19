#include <stdio.h>
#include <string.h>

main() {
    struct employee {
        char emp_id[8];
        char name[20];
        char position[30];
        char dept[30];
        int salary;
    } emp[11] = {{"10000","Sa-art  ","IT Manager         ","IT-Planning",30000},
                {"10001","Sakol   ","Programmer         ","IT_Planning",13000},
                {"10002","Savitree","Admin              ","IT-Planning",10000},
                {"80001","Satid   ","User support       ","Support    ",11000},
                {"80002","Savinee ","Project Coordinator","IT-Planning",13000},
                {"80003","Saithip ","Admin              ","Support    ",10000},
                {"10003","Sartra  ","User Support       ","Support    ",11000},
                {"10004","Sasikarn","System Analyst     ","IT-Planning",15000},
                {"80004","Sasaluk ","System Analyst     ","IT-Planning",15000},
                {"10005","Samaporn","Programmer         ","IT-Planning",13000}};

    char tmp[20];
    float temp;
    int i,j;

    printf("Please enter data of new employee\n");
    printf("Employee id : ");
    fgets(emp[10].emp_id, 8,stdin);
    emp[10].emp_id[strlen(emp[10].emp_id)-1]='\0';
    
    printf("Name : ");
    fgets(emp[10].name, 20,stdin);
    emp[10].name[strlen(emp[10].name)-1]='\0';
    
 	printf("Position : ");
    fgets(emp[10].position,30,stdin);
    emp[10].position[strlen(emp[10].position)-1]='\0';
    
    printf("Dept : ");
    fgets(emp[10].dept,30,stdin);
    emp[10].dept[strlen(emp[10].dept)-1]='\0';
    
    printf("Salary : ");
    scanf("%d",&emp[10].salary);

    for(i=0;i<11;i++) {
	for(j=i+1;j<11;j++) {
        if(strcmp(emp[j].emp_id,emp[i].emp_id) < 0) {
            strcpy(tmp,emp[i].emp_id);
            strcpy(emp[i].emp_id,emp[j].emp_id);
            strcpy(emp[j].emp_id,tmp);
            strcpy(tmp,"");

            strcpy(tmp,emp[i].name);
            strcpy(emp[i].name,emp[j].name);
            strcpy(emp[j].name,tmp);
            strcpy(tmp,"");

            strcpy(tmp,emp[i].position);
            strcpy(emp[i].position,emp[j].position);
            strcpy(emp[j].position,tmp);
            strcpy(tmp,"");

            strcpy(tmp,emp[i].dept);
            strcpy(emp[i].dept,emp[j].dept);
            strcpy(emp[j].dept,tmp);
            strcpy(tmp,"");

            temp = emp[i].salary;
            emp[i].salary = emp[j].salary;
            emp[j].salary = temp;
        }
        }
    }
    for(i=0;i<11;i++) {
        printf("%s %s %s %s %d\n",emp[i].emp_id,emp[i].name
		                    ,emp[i].position,emp[i].dept
			      ,emp[i].salary);
    }
}

/*
Please enter data of new employee
Employee id : 10006
Name : Apichart
Position : Project Coordinator
Dept : IT-Planning
Salary : 13000
10000 Sa-art   IT Manager          IT-Planning 30000
10001 Sakol    Programmer          IT_Planning 13000
10002 Savitree Admin               IT-Planning 10000
10003 Sartra   User Support        Support     11000
10004 Sasikarn System Analyst      IT-Planning 15000
10005 Samaporn Programmer          IT-Planning 13000
10006 Apichart Project Coordinator IT-Planning 13000
80001 Satid    User support        Support     11000
80002 Savinee  Project Coordinator IT-Planning 13000
80003 Saithip  Admin               Support     10000
80004 Sasaluk  System Analyst      IT-Planning 15000
*/