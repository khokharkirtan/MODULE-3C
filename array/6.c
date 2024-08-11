#include <stdio.h>

#define MAX 10


void inputMatrix(int matrix[MAX][MAX], int rows, int cols);
void printMatrix(int matrix[MAX][MAX], int rows, int cols);
void addMatrices(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int rows, int cols);
void subtractMatrices(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int rows, int cols);
void multiplyMatrices(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int row1, int col1, int row2, int col2);

int main()
 {
 	int i;
    int mat1[MAX][MAX], mat2[MAX][MAX], result[MAX][MAX];
    int row1, col1, row2, col2;
    int choice;

    
    printf("Enter the number of rows and columns for the first matrix: ");
    scanf("%d %d", &row1, &col1);
    printf("Enter the elements of the first matrix:\n");
    inputMatrix(mat1, row1, col1);

    
    printf("Enter the number of rows and columns for the second matrix: ");
    scanf("%d %d", &row2, &col2);
    printf("Enter the elements of the second matrix:\n");
    inputMatrix(mat2, row2, col2);

    
    printf("\nChoose the matrix operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("Enter your choice (1, 2, or 3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            if (row1 == row2 && col1 == col2) {
                addMatrices(mat1, mat2, result, row1, col1);
                printf("Result of addition:\n");
                printMatrix(result, row1, col1);
            } else {
                printf("Addition is not possible. Matrices must have the same dimensions.\n");
            }
            break;
        case 2:
            if (row1 == row2 && col1 == col2) {
                subtractMatrices(mat1, mat2, result, row1, col1);
                printf("Result of subtraction:\n");
                printMatrix(result, row1, col1);
            } else {
                printf("Subtraction is not possible. Matrices must have the same dimensions.\n");
            }
            break;
        case 3:
            if (col1 == row2) {
                multiplyMatrices(mat1, mat2, result, row1, col1, row2, col2);
                printf("Result of multiplication:\n");
                printMatrix(result, row1, col2);
            } else {
                printf("Multiplication is not possible. Number of columns of the first matrix must be equal to the number of rows of the second matrix.\n");
            }
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}

// Function to input matrix elements
void inputMatrix(int matrix[MAX][MAX], int rows, int cols)
 {
 	int i ,j;
 	
    for ( i = 0; i < rows; ++i) {
        for ( j = 0; j < cols; ++j) {
            printf("Enter element (%d,%d): ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to print matrix
void printMatrix(int matrix[MAX][MAX], int rows, int cols)
 {
 	int i,j;
    for ( i = 0; i < rows; ++i) {
        for ( j = 0; j < cols; ++j)
		 {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to add two matrices
void addMatrices(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int rows, int cols) 
{
	int i,j;
    for ( i = 0; i < rows; ++i) {
        for ( j = 0; j < cols; ++j) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Function to subtract two matrices
void subtractMatrices(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int rows, int cols)
 
 {
 	int i,j;
    for ( i = 0; i < rows; ++i) {
        for ( j = 0; j < cols; ++j) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}


void multiplyMatrices(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int row1, int col1, int row2, int col2)
 {
 	int i,j,k;
    for ( i = 0; i < row1; ++i) {
        for ( j = 0; j < col2; ++j) {
            result[i][j] = 0;
            for ( k = 0; k < col1; ++k) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}
