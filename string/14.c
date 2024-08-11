#include <stdio.h>

int main()
 {
 	int i;
    char str[MAX_LENGTH];  
    char result[MAX_LENGTH];    
    int j = 0;                 
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin)
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0';
    }

    for ( i = 0; str[i] != '\0'; i++) {
        if (isalpha((unsigned char)str[i])) { 
            result[j++] = str[i];
        }
    }
    result[j] = '\0'; 
    printf("String with only alphabets: %s\n", result);

    return 0;
}
