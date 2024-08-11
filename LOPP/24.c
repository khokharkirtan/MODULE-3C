// 24 1 + 2 + 3 + 4 + 5 + ... + n
#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    int i;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for ( i = 1; i <= n; ++i) {
        sum += i; 
    }
    printf("The sum of the series 1 + 2 + 3 + ... + %d is: %d\n", n, sum);

    return 0;
}
