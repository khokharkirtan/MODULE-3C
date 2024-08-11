//2  WAP of Addition, Subtraction, Multiplication and Division using Switch
case.(Must Be Menu Driven)#include <stdio.h>

void addition();
void subtraction();
void multiplication();
void division();

int main() {
    int choice;

    while (1) {
        
        printf("\nMenu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);


        switch (choice) {
            case 1:
                addition();
                break;
            case 2:
                subtraction();
                break;
            case 3:
                multiplication();
                break;
            case 4:
                division();
                break;
            case 5:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    }
    return 0;
}


void addition() {
    int a, b;
    printf("Enter two numbers to add: ");
    scanf("%d %d", &a, &b);
    printf("Result: %d + %d = %d\n", a, b, a + b);
}


void subtraction() {
    int a, b;
    printf("Enter two numbers to subtract (a - b): ");
    scanf("%d %d", &a, &b);
    printf("Result: %d - %d = %d\n", a, b, a - b);
}

void multiplication() {
    int a, b;
    printf("Enter two numbers to multiply: ");
    scanf("%d %d", &a, &b);
    printf("Result: %d * %d = %d\n", a, b, a * b);
}

void division() {
    int a, b;
    printf("Enter two numbers to divide (a / b): ");
    scanf("%d %d", &a, &b);
    if (b != 0) {
        printf("Result: %d / %d = %.2f\n", a, b, (float)a / b);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}
