#include<stdio.h>
main()
{
	int a=10;
	int b=2;
	int c;
	printf("Before swap: %d\t %d\t",a,b);
	c=a;
	a=b;
	b=c;
	printf("after swap: %d\t %d\t",a,b);
}
