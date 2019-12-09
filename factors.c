#include<stdio.h>
main()
{
	int n,i;
	printf("enter a number\n");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
		printf("%d\t",i);
		}
	}
}