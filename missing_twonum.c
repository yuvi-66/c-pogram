#include<stdio.h>
int main() 
{
        int sum = 0,i=0,sum1 = 0,size = 17 - 6 + 1;
        int arr[] = {6,7,8,9,10,11,12,14,15,16,17};
        while(i<11) 
	{
                sum = sum + arr[i];
                sum1 = sum1 + arr[i] * arr[i];
                i++;
        }
        printf("%d\n", sum);
        int ori = size * ( size +  1);
        int ori_ = ori / 2;
        printf("%d\n", ori_);
        int ori__ = (size * (size + 1) * (2 * size + 1)) / 6;
        printf("%d\n", ori__);
        int result = ori_ - sum;
        int result_ = ori__ - sum1;
        int a = 6, b = 7;
        while(a <= 17) 
	{
                b = a + 1;
                while(b <= 17) 
		{
                        if(a + b == result && a * a + b * b == result_) 
			{
                                printf("The missing elements are:%d and %d\n", a, b);
                                return 0;
                        }
                        b++;
                }
                a++;
        }

        return 0;
}


