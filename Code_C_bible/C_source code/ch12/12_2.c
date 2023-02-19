#include <stdio.h>

main() {
	struct student {
	char std_id[11];
	char name[10];
        	char faculty[20];
        	float grade;
	} std1 = {"6612579433","Somchai","Computer Science",3.79};
    struct student std2 = {"6612579434","Somkid","Computer Science",3.50};

    printf("Student1\n");
    printf("Student Id = %s\n",std1.std_id);
    printf("Name = %s\n",std1.name);
    printf("Faculty = %s\n",std1.faculty);
    printf("Grade = %.2f\n\n",std1.grade);

    printf("Student2\n");
    printf("Student Id = %s\n",std2.std_id);
    printf("Name = %s\n",std2.name);
    printf("Faculty = %s\n",std2.faculty);
    printf("Grade = %.2f\n",std2.grade);
}

/* result

Student1
Student Id = 6612579433
Name = Somchai
Faculty = Computer Science
Grade = 3.79

Student2
Student Id = 6612579434
Name = Somkid
Faculty = Computer Science
Grade = 3.50

*/