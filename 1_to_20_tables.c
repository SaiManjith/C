#include<stdio.h>
main()
{
    int n,i;
    for(n=1;n<=20;n++)
    {
        for(i=1;i<=10;i++)
        {
            printf("\n%d X %d = %d",n,i,n*i);
        }
        printf("\n");
    }
}
