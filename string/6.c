
#include <stdio.h>
#define MAX_LENGTH 100

int main()
 {
 	int i;
    char str[MAX_LENGTH]; 
    int alphabets = 0;   
    int digits = 0;   
    int specialChars = 0;

    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);


    int length = 0;
    while (str[length] != '\0')
	 {
        length++;
    }
    if (length > 0 && str[length - 1] == '\n')
	 {
        str[length - 1] = '\0'; 
    }
    for ( i = 0; i < length; i++)
	 {
        if (isalpha(str[i])) {
            alphabets++;
        } else if (isdigit(str[i])) 
		{
            digits++;
        } else if (!isspace(str[i])) 
		{
            specialChars++;
        }
    }

    printf("Total number of alphabets: %d\n", alphabets);
    printf("Total number of digits: %d\n", digits);
    printf("Total number of special characters: %d\n", specialChars);

    return 0;
}
