#include <stdio.h>

#define SIZE 5
#define NAME_LENGTH 50

int main() 
{
    char names[SIZE][NAME_LENGTH]; 
    int i;

    
    printf("Enter the names of %d students:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        printf("Student %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);

    
        size_t length = strlen(names[i]);
        if (length > 0 && names[i][length - 1] == '\n') {
            names[i][length - 1] = '\0';
        }
    }

    printf("\nNames of the students:\n");
    for (i = 0; i < SIZE; i++) {
        printf("Student %d: %s\n", i + 1, names[i]);
    }

    return 0;
}
