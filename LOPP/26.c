#include <stdio.h>
int main()
 {
    int n;
    int sum = 0;
    int i ,j;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    
    for ( i = 1; i <= n; ++i) {
        for (j = 1; j <= i; ++j) {
            sum += j; 
        }
    }

    printf("The sum of the series (1) + (1+2) + (1+2+3) + ... + (1+2+3+...+%d) is: %d\n", n, sum);

    return 0;
}
