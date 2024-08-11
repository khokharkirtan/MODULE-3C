#include <stdio.h>

int main() {
    int N;
    int i;

    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &N);

    
    printf("Multiplication table for %d:\n", N);
    for ( i = 1; i <= 10; ++i) {
        printf("%d * %d = %d\n", N, i, N * i);
    }

    return 0;
} 
