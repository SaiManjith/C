#include<stdio.h>
main()
{
	int n,sum=0,i;
	printf("enter a number\n");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(n == sum)
	printf("perfect");
	else
	printf("not a perfect");
}