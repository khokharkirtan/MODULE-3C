#include <stdio.h>
int compareStrings(const char *str1, const char *str2)
 {
    while (*str1 != '\0' && *str2 != '\0')
	 {
        if (*str1 != *str2) {
            return *str1 - *str2;
        }
        str1++;
        str2++;
    }


    return *str1 - *str2;
}

int main() {
    char str1[100], str2[100];
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    int length1 = 0;
    while (str1[length1] != '\0') {
        length1++;
    }
    if (length1 > 0 && str1[length1 - 1] == '\n')
	 {
        str1[length1 - 1] = '\0'; 
    }

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    int length2 = 0;
    while (str2[length2] != '\0') {
        length2++;
    }
    if (length2 > 0 && str2[length2 - 1] == '\n') {
        str2[length2 - 1] = '\0';
    }


    int result = compareStrings(str1, str2);
    if (result == 0) {
        printf("The strings are equal.\n");
    } else if (result < 0) {
        printf("The first string is less than the second string.\n");
    } else {
        printf("The first string is greater than the second string.\n");
    }

    return 0;
}
