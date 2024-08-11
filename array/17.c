#include <stdio.h>

#define MAX_NAME_LENGTH 50

struct Employee
 {
    int empNo;
    char empName[MAX_NAME_LENGTH];
    float salary;
};


union Data
 {
    int intValue;
    float floatValue;
    char charValue;
};

int main() 
{
    struct Employee emp;
    emp.empNo = 101;
    snprintf(emp.empName, sizeof(emp.empName), "John Doe");
    emp.salary = 50000.50;


    union Data data;
    data.intValue = 100; 
    printf("Structure Employee:\n");
    printf("Employee Number: %d\n", emp.empNo);
    printf("Employee Name: %s\n", emp.empName);
    printf("Employee Salary: %.2f\n", emp.salary);
    printf("\nUnion Data:\n");
    printf("Integer Value: %d\n", data.intValue);

    data.floatValue = 99.99;
    printf("Float Value: %.2f\n", data.floatValue);
    data.charValue = 'A';
    printf("Character Value: %c\n", data.charValue);
    printf("Current Value in Union (character): %c\n", data.charValue);

    return 0;
}
