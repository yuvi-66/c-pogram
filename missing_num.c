#include<stdio.h>
int findMissingNumber(int arr[],int n) 
{
    int sum = 0;
    int expected_sum=(n*(n+1))/2;
    int i=0;
    while (i<n-1) 
    {
        sum+=arr[i];
        i++;
    }

    return expected_sum-sum;
}
 
{
    int arr[]={0, 1, 2, 3, 4, 5, 6, 8, 9, 10, 11};
    int n=sizeof(arr)/sizeof(arr[0])+1; 
    printf("Missing number: %d", findMissingNumber(arr,n));
    return 0;
}


