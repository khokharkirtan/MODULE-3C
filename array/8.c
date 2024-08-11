#include <stdio.h>
#include <string.h>
void reverseString(char str[], char reversed[])
 {
 	int i;
    int length = strlen(str);
    for ( i = 0; i < length; i++)
	 {
        reversed[i] = str[length - 1 - i];
    }
    reversed[length] = '\0';
}


int isPalindrome(char str[], char reversed[])
 {
    return strcmp(str, reversed) == 0;
}

int main()
 {
    char str[100], reversed[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    
    size_t length = strlen(str);
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
    }

    reverseString(str, reversed);


    printf("Reversed string: %s\n", reversed);

    
    if (isPalindrome(str, reversed)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
