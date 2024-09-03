#include <stdio.h>

int main()
{
    int arr[3] = {1, 2, 3};
    int temp, i, j;
    printf("First array: ");
    i = 0;
    while (i < 3)
    {
        printf("%d ", arr[i]);
        i++;
    }
    j = 2;
    i = 0;
    while (i < j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    printf("Reversed array: ");
    i = 0;
    while (i < 3)
    {
        printf("%d ", arr[i]);
        i++;
    }

    return 0;
}
