// 13 #include <stdio.h>

int main() {
    int number;
    unsigned long long factorial = 1; 
    
    printf("Enter a number: ");
    scanf("%d", &number);

   
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int temp = number;

        // Ca
        while (temp > 0) {
            factorial *= temp;
            temp--; 
        }

        
        printf("Factorial of %d is %llu\n", number, factorial);
    }

    return 0;
}
