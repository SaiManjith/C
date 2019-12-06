#include<stdio.h>
main()
{
    int a;
    printf("enter a:\n");
    scanf("%d",&a);
    printf(a%2==0 ? "Even" : "odd");
}