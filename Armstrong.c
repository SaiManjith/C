#include<stdio.h>
main()
{
	int n,sum=0,temp,r;
	printf("enter the number\n");
	scanf("%d",&n);
	temp=n;
	while(n<0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	n=temp;
if(sum=n)
printf("Arm\n");
else
printf("Not Arm\n");
}
