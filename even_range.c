#include<stdio.h>
int main(int args,char* argv[])
{
	 int n1,n2;
	 printf("enter the range of even numbers:");
	 scanf("%d%d",&n1,&n2);
	 
		 while(n1%2==0)
	 {
		 n1=n1+2;
		 printf("%d/n",n1);
	 }
	return 0;
}
