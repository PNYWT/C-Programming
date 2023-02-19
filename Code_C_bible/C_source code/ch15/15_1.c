#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee {
	char emp_id[5];
	char name[10];
	char surname[20];
	char position[20];
	float salary;
} emp;

void insert_data();
void delete_data();
void search_data_byEmpID();
void search_all_data();
void edit_data();

main() {
	int choice;
	char tmp;
	do {
		fflush(stdin);
		printf("##############################\n");
		printf("# Welcome to employee system #\n");
		printf("##############################\n");
		printf("# Please select choice       #\n");
		printf("# 1. Insert Data             #\n");
		printf("# 2. Delete Data             #\n");
		printf("# 3. Search Data by EmpID    #\n");
		printf("# 4. Search All Data         #\n");
		printf("# 5. Edit Data               #\n");
		printf("# 6. Exit                    #\n");
		printf("##############################\n");
		printf("Please select choice (1-5 only) : ");               
		scanf("%d",&choice);
		scanf("%c",&tmp);
		if(choice==1)insert_data();
		else if(choice==2) delete_data();
		else if(choice==3) search_data_byEmpID();
		else if(choice==4) search_all_data();
		else if(choice==5) edit_data();
	} while(choice!=6);
}
void insert_data() {
	FILE *fp;
	
	char tmp_ENTER;
	int rec;
	if((fp=fopen("employee.txt","ab"))==NULL) {
		printf("Cannot open file for insert data\n\n");
		exit(1);
	}
	printf("\n\nPlease insert employee data\n");
	printf("Employee Id : ");
	fgets(emp.emp_id,5,stdin);
	scanf("%c",&tmp_ENTER);
	printf("Name        : "); fgets(emp.name,10,stdin);
	printf("Surname     : "); fgets(emp.surname,20,stdin);
	printf("Position    : "); fgets(emp.position,20,stdin);
	printf("Salary      : "); scanf("%f",&emp.salary);
	fwrite(&emp,sizeof(emp),1,fp);
	if(ferror(fp)) {
		printf("Error for insert data\n\n");
		exit(1);
	}
	else
		printf("Insert Data Complete!!!\n\n");
	fclose(fp);
}
void delete_data() {
	FILE *fp;
	int i=0,count;
	char ans;
	char rec[5];
	
	if((fp=fopen("employee.txt","rb+"))==NULL) {
		printf("Cannot open file for delete data\n\n");
		exit(1);
	}
	
	while(1) {
		fread(&emp,sizeof(emp),1,fp);
		
		if(ferror(fp)) {
			printf("Error to read data for delete\n\n");
			exit(1);
		}
		if(feof(fp))
			break;
	
		printf("\n");
		++i;
		if(strcmp(emp.emp_id,"\0") != 0){
			printf("Record number %d. Emp id = %s \n",i,emp.emp_id);
			++count;
		}
	}
	
	if(count != 0){
		printf("\nDo you want to delete data (Y or N) : ");
		ans = getche();
		if(ans=='Y') {
			printf("\nEnter record number for delete : ");
			fgets(rec,5,stdin);
			
			if(atoi(rec) < 1 || atoi(rec) > i) {
				printf("Record Number not found!!!\n\n");
			}
			else {
				fseek(fp,((atoi(rec)-1)*sizeof(emp)),SEEK_SET);
				
				strcpy(emp.emp_id,"\0");
				fwrite(&emp,sizeof(emp),1,fp);
				if(ferror(fp)) {
					printf("Error for delete data\n\n");
					exit(1);
				}
				printf("Delete data complete\n\n");
			}	
		}
		else if(ans=='N') {
			printf("\n");
		}
		else printf("Please enter Y or N only!!!\n\n");
	}
	else {
		printf("All Employee already delete\n\n");
	}
	fclose(fp);
}
void search_data_byEmpID() {
	FILE *fp;

	char id[5];
	if((fp=fopen("employee.txt","rb"))==NULL) {
		printf("Cannot open file for search data\n\n");
		exit(1);
	}

	printf("\n\nPlease enter employee id for search : ");
	scanf("%s",id);

	while(1){
		fread(&emp,sizeof(emp),1,fp);
		if(ferror(fp)) {
			printf("Error for search data\n\n");
			exit(1);
		}
		if(feof(fp)) break;
		if(strcmp(id,emp.emp_id)==0) {
			printf("Data Found!!!\n");
			printf("Employee id : %s\n",emp.emp_id);
			printf("Name        : %s",emp.name);
			printf("Surname     : %s",emp.surname);
			printf("Position    : %s",emp.position);
			printf("Salary      : %.2f\n",emp.salary);
			break;
		}
	}
	if(strcmp(id,emp.emp_id)!=0)
		printf("No employee in employee id %s\n\n",id);
	fclose(fp);
}

void search_all_data() {
	FILE *fp;
	int flag=0;
	if((fp=fopen("employee.txt","rb"))==NULL) {
		printf("Cannot open file for search data\n\n");
		exit(1);
	}
	rewind(fp);
	printf("\n");
	
	while(fread(&emp, sizeof(emp), 1, fp) == 1) {
		if(strcmp(emp.emp_id,"\0") != 0) {
			++flag;
			printf("Employee id : %s\n",emp.emp_id);
			printf("Name        : %s",emp.name);
			printf("Surname     : %s",emp.surname);
			printf("Position    : %s",emp.position);
			printf("Salary      : %.2f\n",emp.salary);
			printf("##############################\n");
		}
	}
	if(flag == 0)
		printf("No employee data found\n\n");
	fclose(fp);
}

void edit_data() {
	FILE *fp;
	char ans,tmp_ENTER;
	char id[5],tmp[20];
	int count=0;
	
	if((fp=fopen("employee.txt","rb+"))==NULL) {
		printf("Cannot open file for edit data\n\n");
		exit(1);
	}

	printf("\n\nPlease enter employee id for edit : ");
	scanf("%s",id);

	while(fread(&emp, sizeof(emp), 1, fp) == 1) {
		if(ferror(fp)) {
			printf("Error for search data\n\n");
			exit(1);
		}
		if(feof(fp)) break;
		if(strcmp(id,emp.emp_id) == 0) {
			++count;
			printf("Current Data\n");
			printf("Employee id : %s\n",emp.emp_id);
			printf("Name        : %s",emp.name);
			printf("Surname     : %s",emp.surname);
			printf("Position    : %s",emp.position);
			printf("Salary      : %.2f\n",emp.salary);
		
			printf("\nDo you want to edit data(Y or N) : ");
			ans = getche();
			if(ans=='Y') {
				fseek(fp,ftell(fp)-sizeof(emp),SEEK_SET);
				printf("\nPlease enter new data\n");
				printf("Employee id : %s\n",emp.emp_id);scanf("%c",&tmp_ENTER);
				printf("Name        : "); fgets(emp.name,10,stdin);
				printf("Surname     : "); fgets(emp.surname,20,stdin);
				printf("Position    : "); fgets(emp.position,20,stdin);
				printf("Salary      : "); fgets(tmp,20,stdin);
				emp.salary = atof(tmp);
				fwrite(&emp,sizeof(emp),1,fp);
				if(ferror(fp)) {
					printf("Error for edit data\n\n");
					exit(1);
				}
				else {
					printf("Edit Data Complete!!!\n\n");
					break;
				}
			}
			else if(ans=='N') {
				printf("\n");
				break;
			}
			else printf("Please enter Y or N only!!!\n\n");
		}
	}
	if(count == 0) {
		printf("No employee data to edit\n");
	}
	fclose(fp);
}