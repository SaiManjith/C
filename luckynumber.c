#include<stdio.h>
main()
{
    int n,r,sum=0;
    printf("Enter the vchile no.\n");
    scanf("%d",&n);
    test:
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    if(sum<10)
     printf("\n Lucky number:%d\n",sum);
    else
    {
    n=sum;
    sum=0;
    goto test;
    }
}
