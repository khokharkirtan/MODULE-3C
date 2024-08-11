#include <stdio.h>

void sortArray(int arr[], int size, int ascending)
 {
 	int i,j;
    
    for ( i = 0; i < size - 1; ++i)
	 {
        for ( j = i + 1; j < size; ++j) 
		{
            if ((ascending && arr[i] > arr[j]) || (!ascending && arr[i] < arr[j])) {
                
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void printArray(int arr[], int size)
 {
 	int i;
    
    for ( i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
 {
 	int i;
    int n1, n2;
    int choice;

    
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter the elements of the first array:\n");
    for ( i = 0; i < n1; ++i) {
        scanf("%d", &arr1[i]);
    }

    
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter the elements of the second array:\n");
    for (i = 0; i < n2; ++i) {
        scanf("%d", &arr2[i]);
    }


    printf("Choose sorting order:\n");
    printf("1. Ascending\n");
    printf("2. Descending\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    int ascending = (choice == 1);
    sortArray(arr1, n1, ascending);
    printf("Sorted first array: ");
    printArray(arr1, n1);
    sortArray(arr2, n2, ascending);
    printf("Sorted second array: ");
    printArray(arr2, n2);

    return 0;
}
