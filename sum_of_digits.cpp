#include<stdio.h>
main()
{
    int n,sum=0;
    printf("Enter the number:\n");
    scanf("%d",&n);
    while(n>0)
    {
        sum=sum+(n%10);
        n=n/10;
    }
    printf("\nsum:%d",sum);
    
}


