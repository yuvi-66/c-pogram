#include <stdio.h>

int main() 
{
    int matrix1[3][3];
    int matrix2[3][3];
    int sum[3][3];
    int i = 0, j = 0;

    printf("Enter the elements of the first 3x3 matrix:\n");
    while (i < 3) 
    {
        while (j < 3) 
	{
            scanf("%d", &matrix1[i][j]);
            j++;
        }
        j = 0;
        i++;
    }

    i = 0;
    printf("Enter the elements of the second 3x3 matrix:\n");
    while (i < 3) 
    {
        while (j < 3) 
	{
            scanf("%d", &matrix2[i][j]);
            j++;
        }
        j = 0;
        i++;
    }

    i = 0;
    while (i < 3) 
    {
        j = 0;
        while (j < 3) 
	{
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
            j++;
        }
        i++;
    }

    printf("The sum of the two matrices is:\n");
    i = 0;
    while (i < 3) 
    {
        j = 0;
        while (j < 3) 
	{
            printf("%d ", sum[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}
