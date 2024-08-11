#include <stdio.h>

void findLargestAndSmallestWords(const char *str, char *largest, char *smallest) {
    char word[MAX_WORD_LENGTH];
    int largestLength = 0, smallestLength = MAX_LENGTH;
    int wordLength = 0;
    int isWord = 0;
    largest[0] = '\0';
    smallest[0] = '\0';
    int i;

    for ( i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) { 
            word[wordLength++] = str[i];
            isWord = 1;
        } else {
            if (isWord) {
                word[wordLength] = '\0'; 

                if (wordLength > largestLength) {
                    largestLength = wordLength;
                    strcpy(largest, word);
                }
                
                if (wordLength < smallestLength) {
                    smallestLength = wordLength;
                    strcpy(smallest, word);
                }

            
                wordLength = 0;
                isWord = 0;
            }
        }
    }


    if (isWord) {
        word[wordLength] = '\0';
        if (wordLength > largestLength) {
            largestLength = wordLength;
            strcpy(largest, word);
        }
        if (wordLength < smallestLength) {
            smallestLength = wordLength;
            strcpy(smallest, word);
        }
    }
}

int main() {
    char str[MAX_LENGTH];      
    char largest[MAX_WORD_LENGTH];
    char smallest[MAX_WORD_LENGTH]; 


    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);


    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0';
    }

    
    findLargestAndSmallestWords(str, largest, smallest);
    printf("Largest word: %s\n", largest);
    printf("Smallest word: %s\n", smallest);

    return 0;
}
