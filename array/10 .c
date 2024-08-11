#include <stdio.h>


int isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;
    int digit;
    while (num != 0) {
        digit = num % 10;         
        reversedNum = reversedNum * 10 + digit; 
        num /= 10;                
    }

    
    return (reversedNum == originalNum);
}

int main() {
    int number;


    printf("Enter a number: ");
    scanf("%d", &number);

    
    if (isPalindrome(number)) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }

    return 0;
}
