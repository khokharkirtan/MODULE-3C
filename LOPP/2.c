//2 WAP to accept 5 numbers from user and display all numbers


#include <stdio.h>
int main() {
    int numbers[5];
    int i;

    // Accept 5 numbers from the user
    printf("Enter 5 numbers: ");
    for (i = 0; i < 5; ++i) {
        scanf("%d", &numbers[i]);
    }

    // Display the numbers
    printf("You entered: ");
    for (i = 0; i < 5; ++i) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
