// 2 Write a program in C to separate individual characters from a string.
#include <stdio.h>

int main()
 {
 	int i;
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    if (len > 0 && str[len - 1] == '\n')
	 {
        str[len - 1] = '\0'; 
        len--; 
    }
    printf("\nIndividual characters:\n");
    for (i = 0; i < len; i++) {
        printf("%c\n", str[i]);
    }

    return 0;
}
