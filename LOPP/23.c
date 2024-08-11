#include <stdio.h>
int main()
 {
    int number, reversedNumber = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    int originalNumber = number; 


    for (; number != 0; number /= 10) {
        int remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
    }

    printf("Original Number: %d\n", originalNumber);
    printf("Reversed Number: %d\n", reversedNumber);

    return 0;
}
