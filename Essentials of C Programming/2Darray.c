//entering element in 2d array and printing them
#include <stdio.h>
int main() {
    int rows, cols;

    // Input number of rows and columns
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols]; // Declare a 2D array
    // Input elements into the 2D array
    for (int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The elements in the 2D array are:\n");
    // Print the elements of the 2D array
    for (int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}