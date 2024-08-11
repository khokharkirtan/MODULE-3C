#include <stdio.h>


void combineStrings(char *str1, char *str2, char *result) {
    int i = 0, j = 0;

    while (str1[i] != '\0')
	 {
        result[j++] = str1[i++];
    }

    i = 0;
    while (str2[i] != '\0') 
	{
        result[j++] = str2[i++];
    }


    result[j] = '\0';
}

int main() {
    char str1[MAX_LENGTH], str2[MAX_LENGTH], combined[MAX_LENGTH]
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    int len1 = 0;
    while (str1[len1] != '\0') {
        len1++;
    }
    if (len1 > 0 && str1[len1 - 1] == '\n') {
        str1[len1 - 1] = '\0'; 
    }


    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    int len2 = 0;
    while (str2[len2] != '\0') {
        len2++;
    }
    if (len2 > 0 && str2[len2 - 1] == '\n')
	 {
        str2[len2 - 1] = '\0'; 
    }


    combineStrings(str1, str2, combined);

    printf("Combined string: %s\n", combined);

    return 0;
}
