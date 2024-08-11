#include <stdio.h>


void bubbleSort(int array[], int size
) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++)
	 {
        for (j = 0; j < size - i - 1; j++) 
		{
            if (array[j] > array[j + 1]) 
			{
        
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void displayArray(int array[], int size)
 
 {
 	int i;
    printf("Array elements:\n");
    for ( i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main()
 {
    int numbers[ SIZE];

    printf("Enter %d numbers:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    bubbleSort(numbers, SIZE)
    printf("\nSorted array in ascending order:\n");
    displayArray(numbers, SIZE);
    
    return 0;
}
