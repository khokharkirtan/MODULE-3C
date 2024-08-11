#include <stdio.h>

#define MAX_EMPLOYEES 5


struct Employee {
    int empNo;       
    char empName[50]; 
    char address[100]; 
    int age;         
};


void inputEmployees(struct Employee employees[], int count) 
{
	int i;
    for (i = 0; i < count; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Employee Number: ");
        scanf("%d", &employees[i].empNo);
        printf("Employee Name: ");
        scanf(" %[^\n]%*c", employees[i].empName); 
        printf("Employee Address: ");
        scanf(" %[^\n]%*c", employees[i].address);
        printf("Employee Age: ");
        scanf("%d", &employees[i].age);
        printf("\n");
    }
}


void displayEmployees(struct Employee employees[], int count)
 {
 	int i;
    for (i = 0; i < count; i++)
	 {
        printf("Employee %d Information:\n", i + 1);
        printf("Employee Number: %d\n", employees[i].empNo);
        printf("Employee Name: %s\n", employees[i].empName);
        printf("Employee Address: %s\n", employees[i].address);
        printf("Employee Age: %d\n", employees[i].age);
        printf("\n");
    }
}

int main()
 {
    struct Employee employees[MAX_EMPLOYEES];


    inputEmployees(employees, MAX_EMPLOYEES);

    displayEmployees(employees, MAX_EMPLOYEES);

    return 0;
}
