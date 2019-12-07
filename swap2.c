#include<stdio.h>
main()
{
	int a=10;
	int b=2;
	printf("Before swap: %d\t %d\t",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swap: %d\t %d\t",a,b);
}
