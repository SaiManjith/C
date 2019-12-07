#include<stdio.h>
main()
{
	int m,p,c,total;
	float Avg;
	printf("Enter the marks in maths:\n");
	scanf("%d",&m);
	printf("Enter the marks in physics:\n");
	scanf("%d",&p);
	printf("Enter the marks in chemistry:\n");
	scanf("%d",&c);
	total=m+p+c;
	Avg=(float)total/3;
	printf("avg:%f\n",Avg);
	printf("total:%d\n",total);
}