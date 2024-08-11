#include <stdio.h>
int main() 
{
	int i;
    char str[MAX_LENGTH]; 
    int charCount[ASCII_SIZE] = {0}
    int maxCount = 0; 
    char maxChar;
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
    for ( i = 0; i < length; i++) {
        unsigned char ch = (unsigned char) str[i]; 
        charCount[ch]++;
    }

    
    for (int i = 0; i < ASCII_SIZE; i++)
	 {
        if (charCount[i] > maxCount) 
		{
            maxCount = charCount[i];
            maxChar = (char) i;
        }
    }

    printf("Character with the maximum occurrences: '%c'\n", maxChar);
    printf("Number of occurrences: %d\n", maxCount);

    return 0;
}
