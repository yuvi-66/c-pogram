#include <stdio.h>

int main() 
{
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];
    int i = 0, j = 0;

    printf("Enter the elements of the array:\n");
    while (i < rows) 
    {
        while (j < cols) 
	{
            scanf("%d", &arr[i][j]);
            j++;
        }
        j = 0;
        i++;
    }

    printf("The array is:\n");
    i = 0;
    while (i < rows) 
    {
        j = 0;
        while (j < cols) 
	{
            printf("%d ", arr[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}
