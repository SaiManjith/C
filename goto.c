#include<stdio.h>
main()
{
    int n;
    printf("\n Enter a number \n");
    scanf("%d",&n);
    if(n%2==0)
    {
        goto even;
    }
    else
    {
        goto odd;
    }
    even:printf("\n Even\n");exit(0);
    odd:printf("\n Odd\n");
}
