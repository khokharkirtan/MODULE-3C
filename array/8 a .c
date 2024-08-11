#include <stdio.h>
int main 
struct Employee 
{
    int empNo;        
    char empName[50]; 
    char address[100];
    int age;       
};
void inputEmployee(struct Employee *e);
 {
    printf("Enter employee numbe
    scanf("%d", &e->empNo);
    printf("Enter employee name: ");
    scanf(" %[^\n]%*c", e->empName); 
    printf("Enter employee address: ");
    scanf(" %[^\n]%*c", e->address); 
    printf("Enter employee age: ");
    scanf("%d", &e->age);
};


void displayEmployee(struct Employee e)
 {
    printf("\nEmployee Information:\n");
    printf("Employee Number: %d\n", e.empNo);
    printf("Employee Name: %s\n", e.empName);
    printf("Employee Address: %s\n", e.address);
    printf("Employee Age: %d\n", e.age);
};

int main()
 {
    struct Employee emp;


    inputEmployee(&emp);

    
    displayEmployee(emp);

    return 0;
}
