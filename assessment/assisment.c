#include <stdio.h>

// Function to input a matrix
void inputMatrix(int matrix[2][2], int row, int col, int matrixNum) {
    printf("\n-----------Matrix: %d-----------\n", matrixNum);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Enter elements : ");
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[2][2], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to perform matrix multiplication
void multiplyMatrices(int a[2][2], int b[2][2], int result[2][2], int r1, int c1, int c2) {
    // Initialize result matrix
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
            result[i][j] = 0;

    // Multiply
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
            for (int k = 0; k < c1; k++)
                result[i][j] += a[i][k] * b[k][j];
}

int main() {
    int a[2][2], b[2][2], result[2][2];
    int r1, c1, r2, c2;

    printf("Matrix Multiplication\n");

    // Input dimensions
    printf("Enter rows and columns for Matrix 1: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for Matrix 2: ");
    scanf("%d %d", &r2, &c2);

    // Check matrix multiplication condition
    if (c1 != r2) {
        printf("Matrix multiplication not possible. Columns of Matrix 1 must equal rows of Matrix 2.\n");
        return 0;
    }

    // Input matrices
    inputMatrix(a, r1, c1, 1);
    inputMatrix(b, r2, c2, 2);

    // Display matrices
    printf("\n");
    displayMatrix(a, r1, c1);
    printf("\n");
    displayMatrix(b, r2, c2);

    // Perform multiplication
    multiplyMatrices(a, b, result, r1, c1, c2);

    // Show result
    printf("\n-----------Result : Multiplication Matrix-----------\n");
    displayMatrix(result, r1, c2);

    return 0;
}
