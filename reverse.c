#include<stdio.h>
main()
{
    int n,sum=0;
    printf("Enter the number:\n");
    scanf("%d",&n);
    while(n>0)
    {
        sum=sum*10+(n%10);
        n=n/10;
    }
    printf("\nREVERSE NUMBER:%d",sum);
    
}

