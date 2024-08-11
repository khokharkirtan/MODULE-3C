
#include <stdio.h>

int sPalindrome(int num) 
{
    int reversed = 0, original, remainder;

    original = num;

    
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    return original == reversed;
}

int main() {
    int count = 0;
    int number;

    
    printf("Enter 3 numbers:\n");

    
    while (count < 3)
	 {
        printf("Number %d: ", count + 1);
        scanf("%d", &number);

        
        if (isPalindrome(number))
		 {
            printf("%d is a palindrome.\n", number);
        } 
		else
		 {
            printf("%d is not a palindrome.\n", number);
        }

        count++; 
    }

    return 0;
}
