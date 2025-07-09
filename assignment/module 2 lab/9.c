#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    printf("One-Dimensional Array Elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
//Two-Dimensional Array (3x3 Matrix) & Sum
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int sum = 0;
    printf("Two-Dimensional Array (3x3 Matrix):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
            sum += matrix[i][j];
        }
        printf("\n");
    }
    printf("\nSum of all elements in the matrix: %d\n", sum);
    return 0;
}
