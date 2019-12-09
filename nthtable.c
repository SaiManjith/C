#include<stdio.h>
main()
{
    int n,i;
    printf("Enter the number\n");
    scanf("%d",&n);
    i=1;
    while(i<=10)
    {
        printf("%d X %d =%d\n",n,i,n*i);
        i++;
    }
}

