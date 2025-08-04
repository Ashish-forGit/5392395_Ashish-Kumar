//add elem of two 2d arrays
#include <stdio.h>
int main() {
    int rows, cols;

    // Input number of rows and columns
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int arr1[rows][cols], arr2[rows][cols], sum[rows][cols];

    // Input elements into the first 2D array
    printf("Enter elements for first array:\n");
    for (int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    // Input elements into the second 2D array
    printf("Enter elements for second array:\n");
    for (int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    // Calculate the sum of the two arrays
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    // Print the sum of the two arrays
    printf("The sum of the two 2D arrays is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
        
