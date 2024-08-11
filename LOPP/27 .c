#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    int i;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            sum -= (double)i / (i + 1); 
        } else {
            sum += (double)i / (i + 1); 
        }
    }

    printf("The sum of the series is: %.6f\n", sum);

    return 0;
}
