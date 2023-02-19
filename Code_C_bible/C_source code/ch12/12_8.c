#include <stdio.h>

main() {
    struct employee {
        char emp_id[7];
        float salary;
    };

    struct computer_dept {
    	struct employee emp1;
    	struct employee emp2;
    	struct employee emp3;
    };

    struct computer_dept comdept = {
        {"264096",18000},
        {"264097",20000}
    };

    char tmp[7];

    printf("Employee1\n");
    printf("Employee Id : %s\n",comdept.emp1.emp_id);
    printf("Salary      : %.2f\n\n",comdept.emp1.salary);

    printf("Employee2\n");
    printf("Employee Id : %s\n",comdept.emp2.emp_id);
    printf("Salary      : %.2f\n\n",comdept.emp2.salary);

    printf("Employee3\n");
    printf("Employee Id : %s\n",comdept.emp3.emp_id);
    printf("Salary      : %.2f\n\n",comdept.emp3.salary);

    printf("No employee3 's data , please enter data\n");
    printf("Enter employee id : ");
    fgets(comdept.emp3.emp_id,7,stdin);
    printf("Enter salary : ");
    scanf("%f",&comdept.emp3.salary);

    printf("\nEmployee1\n");
    printf("Employee Id : %s\n",comdept.emp1.emp_id);
    printf("Salary      : %.2f\n\n",comdept.emp1.salary);

    printf("Employee2\n");
    printf("Employee Id : %s\n",comdept.emp2.emp_id);
    printf("Salary      : %.2f\n\n",comdept.emp2.salary);

    printf("Employee3\n");
    printf("Employee Id : %s",comdept.emp3.emp_id);
    printf("Salary      : %.2f\n",comdept.emp3.salary);
}

/* result

Employee1
Employee Id : 264096
Salary      : 18000.00

Employee2
Employee Id : 264097
Salary      : 20000.00

Employee3
Employee Id : 
Salary      : 0.00

No employee3 's data , please enter data
Enter employee id : 264098
Enter salary : 15000

Employee1
Employee Id : 264096
Salary      : 18000.00

Employee2
Employee Id : 264097
Salary      : 20000.00

Employee3
Employee Id : 264098
Salary      : 15000.00

*/