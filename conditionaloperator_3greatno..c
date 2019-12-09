#include <stdio.h>
int main()
{
 int a,b,c;
 printf("Enter the values of a,b and c\n");
 scanf("%d %d %d",&a,&b,&c);
 printf(a==b && b==c ? " all are equal " : a>b && a>c ? "ais big" : b>c ? "b is big" : " c is big");
}

