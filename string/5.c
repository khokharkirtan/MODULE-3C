#include <stdio.h>

int main()
 {
 	int i;
    char str[100]; 
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[length] != '\0') {
        length++;
    }
    if (length > 0 && str[length - 1] == '\n') 
	{
        str[length - 1] = '\0'; 
        length--;
    }
    printf("\nIndividual characters in reverse order:\n");
    for (i = length - 1; i >= 0; i--) {
        printf("%c\n", str[i]);
    }

    return 0;
}
