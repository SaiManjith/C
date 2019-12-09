#include<stdio.h>
main ()
{
  int p,n,c,i;
  printf ("enter a number:\n");
  scanf ("%d", &n);
 for(p=1;p<=n;p++)
 {
      c = 0;
      for (i = 2; i <= p/2; i++)
    {
      if (p % i == 0)
	{
	  c++;
	}
    }
  if (c == 0)
    printf ("%d\n",p);
  
 }
 
}
