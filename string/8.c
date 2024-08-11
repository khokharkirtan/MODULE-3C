#include <stdio.h>

int main() {
    char str[MAX_LENGTH]; 
    int vowels = 0;      
    int consonants = 0; 

    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    if (length > 0 && str[length - 1] == '\n')
	 {
        str[length - 1] = '\0';
    }
    for (int i = 0; i < length; i++) 
	{
        char ch = tolower(str[i]); 

        if (ch >= 'a' && ch <= 'z') 
		{
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
			 {
                vowels++;
            } else 
			{
                consonants++;
            }
        }
    }
    printf("Total number of vowels: %d\n", vowels);
    printf("Total number of consonants: %d\n", consonants);

    return 0;
}
