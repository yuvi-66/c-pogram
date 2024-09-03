#include <stdio.h>

int main() 
{
    int matrix[3][5];
    int i = 0, j = 0, count = 0;

    printf("Enter the elements of the 3x5 matrix:\n");
    while (i < 3) 
    {
        while (j < 5) 
	{
            scanf("%d", &matrix[i][j]);
            j++;
        }
        j = 0;
        i++;
    }

    printf("The matrix is:\n");
    i = 0;
    while (i < 3) 
    {
        j = 0;
        while (j < 5) 
	{
            printf("%d ", matrix[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }

    i = 0;
    while (i < 3) {
        j = 0;
        while (j < 5) {
            if (matrix[i][j] == 0) 
	    {
                count++;
            }
            j++;
        }
        i++;
    }

    printf("Number of zeros in the matrix: %d\n", count);

    return 0;
}
