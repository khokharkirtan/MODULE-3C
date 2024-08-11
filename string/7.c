#include <stdio.h>
int main()
 {
 	
    char source[MAX_LENGTH]; 
    char destination[MAX_LENGTH]; 

    printf("Enter the source string: ");
    fgets(source, sizeof(source), stdin);
    int length = 0;
    while (source[length] != '\0') {
        length++;
    }
    if (length > 0 && source[length - 1] == '\n') 
	{
        source[length - 1] = '\0'; 
    }


    int i;
    for (i = 0; i <= length; i++)
	 {
        destination[i] = source[i];
    }

    printf("Copied string: %s\n", destination);

    return 0;
}
