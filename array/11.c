#include <stdio.h>

#define SIZE 5

int main() {
    int numbers[SIZE]; 
    int i;

    printf("Enter %d numbers:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }


    printf("\nNumbers in reverse order:\n");
    for (i = SIZE - 1; i >= 0; i--) {
        printf("%d\n", numbers[i]);
    }

    return 0;
}
