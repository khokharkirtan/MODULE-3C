#include <stdio.h>
int main()
 {
    int number, firstDigit, lastDigit, sum;

    
    printf("Enter a number: ");
    scanf("%d", &number);
    number = abs(number);
    lastDigit = number % 10;

    int temp = number;
    while (temp >= 10) {
        temp /= 10;
    }
    firstDigit = temp;

   
    sum = firstDigit + lastDigit;
    printf("Sum of the first and last digits: %d\n", -sum);

    return 0;
} 
