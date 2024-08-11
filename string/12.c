#include <stdio.h>

int countOccurrences(const char *str, const char *word)
 {
    int count = 0;
    const char *pos = str;

    while ((pos = strstr(pos, word)) != NULL)
	 {
        count++;
        pos += strlen(word);
    }
    
    return count;
}

int main() {
    char str[MAX_LENGTH]; 
    const char *word = "is
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0'; 
    }

    int count = countOccurrences(str, word);

    // Print the result
    printf("The word \"%s\" appears %d times in the string.\n", word, count);

    return 0;
}
