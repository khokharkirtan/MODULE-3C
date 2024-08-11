#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

void extractSubstring(char *source, int start, int length, char *destination) {
    int i;
    for (i = 0; i < length && source[start + i] != '\0'; i++) {
        destination[i] = source[start + i];
    }
    destination[i] = '\0'; 
}

int main() {
    char str[MAX_LENGTH];     
    char substring[MAX_LENGTH]; 
    int start, length;
    printf("Enter the main string: ");
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
	 {
        str[len - 1] = '\0'; 
    }

    printf("Enter the starting index for the substring: ");
    scanf("%d", &start);
    printf("Enter the length of the substring: ");
    scanf("%d", &length);
    if (start < 0 || start >= len || length < 0) {
        printf("Invalid starting index or length.\n");
        return 1;
    }
    extractSubstring(str, start, length, substring);

    printf("Extracted substring: %s\n", substring);

    return 0;
}
