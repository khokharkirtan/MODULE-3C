#include <stdio.h>
int main 

 factorial(int n) 
{
    unsigned long long fact = 1;
    while (n > 0) {
        fact *= n;
        n--;
    }
    return fact;
}

int main() {
	int i;
    int numbers[5];


    printf("Enter 5 numbers:\n");
    for  i = 0; i < 5; ++i) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    
    printf("\nFactorials:\n");
    for (int i = 0; i < 5; ++i) {
        if (numbers[i] < 0) {
            printf("Factorial is not defined for negative numbers.\n");
        } else {
            unsigned long long fact = factorial(numbers[i]);
            printf("Factorial of %d is %llu\n", numbers[i], fact);
        }
    }

    return 0;
}
