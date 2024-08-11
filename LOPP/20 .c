#include <stdio.h>

int main() {
    int rows = 5;
    int i ,j;


    for ( i = 1; i <= rows; ++i) {
        // Print each row
        for ( j = 1; j <= i; ++j) {
            printf("%d", i); 
        }
        printf("\n"); 
    }

    return 0;
}
