#include <stdio.h>

int main() 
{
    int matrix[3][3];
    int i = 0, j = 0, sum = 0;

    printf("Enter the elements of the 3x3 matrix:\n");
    while (i < 3) 
    {
        while (j < 3) 
	{
            scanf("%d", &matrix[i][j]);
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
            sum += matrix[i][j];
            j++;
        }
        i++;
    }

    printf("The sum of all elements in the matrix is: %d\n", sum);

    return 0;
}
