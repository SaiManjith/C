#include<stdio.h>
main()
{
    int n;
    printf("enter n\n");
    scanf("%d",&n);
    if(n%5==0 && n%11==0)
    printf("yes");
    else
    printf("no");
}