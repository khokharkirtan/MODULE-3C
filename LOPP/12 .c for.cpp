#include <stdio.h>
#include <math.h> 

int main()
 {
    int number, originalNumber, sum = 0, digit, numDigits = 0;

    
    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;

    while (originalNumber != 0)
	 {
        originalNumber /= 10;
        numDigits++;
    }

    originalNumber = number;


    for (int i = 0; i < numDigits; i++) {
        digit = originalNumber % 10; 
        sum += pow(digit, numDigits);
        originalNumber /= 10; 
    }

   
    if (sum == number) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}
