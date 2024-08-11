#include <stdio.h>

int main()
 {
 	int i;
    char str[MAX_LENGTH]; 
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    if (length > 0 && str[length - 1] == '\n')
	 {
        str[length - 1] = '\0';
    }
    for ( i = 0; str[i] != '\0'; i++) {
        if (islower(str[i]))
		 {
            str[i] = toupper(str[i]);
        } else if (isupper(str[i]))
		 {
            str[i] = tolower(str[i]);
        }
    }


    printf("Modified sentence: %s\n", str);

    return 0;
}
