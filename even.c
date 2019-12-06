#include<stdio.h>
main()
{
    int a;
    printf("Enter the number:\n");
    scanf("%d",&a);
    if(a%2==1)
    {
        printf("Odd");
    }
    if(a%2==0)
    {
        printf("Even");
    }
}