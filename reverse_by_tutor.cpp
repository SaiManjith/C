#include<stdio.h>
main()
{
    int n,r;
    printf("Enter the number:\n");
    scanf("%d",&n);
    printf("\nREVERSE NUMBER:");
    while(n>0)
    {
       r=n%10;
       printf("%d",r);
       n=n/10;
    }
    
}

