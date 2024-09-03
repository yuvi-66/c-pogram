#include <stdio.h>

void find_duplicates(int arr[], int n) 
{
    int i = 0;

    while (i < n) 
    {
        int j = i + 1;
        while (j < n) 
	{
            if (arr[i] == arr[j]) 
	    {
                printf("%d is a duplicate element\n", arr[i]);
                break;
            }
            j++;
        }
        i++;
    }
}

int main() 
{
    int arr[] = {3, 6, 8, 8, 10, 12, 15, 15, 15, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    find_duplicates(arr, n);

    return 0;
}
