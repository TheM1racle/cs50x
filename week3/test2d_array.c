#include <stdio.h>

int main(void)
{   
    int rows = 2;
    int cols = 3;
    int matrix[2][3]; //2 rows and 3 columns

    printf("Enter %d numbers for the matrix:\n", rows * cols);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nYour 2d Array:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}