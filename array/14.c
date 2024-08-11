#include <stdio.h>

#define ROWS 3
#define COLS 3
void inputMatrix(int matrix[ROWS][COLS])
 {
 	int i,j;
    printf("Enter the elements of the %dx%d matrix:\n", ROWS, COLS);
    for ( i = 0; i < ROWS; i++) {
        for ( j = 0; j < COLS; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int matrix[ROWS][COLS])
 
 {
 	int i,j;
    printf("\nMatrix:\n");
    for ( i = 0; i < ROWS; i++) {
        for ( j = 0; j < COLS; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}
void rowSum(int matrix[ROWS][COLS])
 {
 	int i,j;
    printf("\nSum of each row:\n");
    for ( i = 0; i < ROWS; i++) {
        int sum = 0;
        for ( j = 0; j < COLS; j++) {
            sum += matrix[i][j];
        }
        printf("Sum of row %d: %d\n", i + 1, sum);
    }
}

void colSum(int matrix[ROWS][COLS])
 {
 	int i,j;
    printf("\nSum of each column:\n");
    for (j = 0; j < COLS; j++) {
        int sum = 0;
        for (i = 0; i < ROWS; i++) {
            sum += matrix[i][j];
        }
        printf("Sum of column %d: %d\n", j + 1, sum);
    }
}

int main() {
    int matrix[ROWS][COLS];
    inputMatrix(matrix);
    displayMatrix(matrix);
    rowSum(matrix);
    colSum(matrix);

    return 0;
}
