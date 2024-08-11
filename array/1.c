#include <stdio.h> 
int findMax(int arr[], int size)
 {
    int max = arr[0]; 
    int i;
    for ( i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int main() {
    int n;
    int i;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; ++i) 
	{
        scanf("%d", &arr[i]);
    }

    
    int maxNumber = findMax(arr, n);

    printf("The maximum number in the array is: %d\n", maxNumber);

    return 0;
}
