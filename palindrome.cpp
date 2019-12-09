#include<stdio.h>
main ()
{
  int n, sum = 0, temp;
  printf ("Enter the number:\n");
  scanf ("%d", &n);
  temp = n;
  while (n > 0)
    {
      sum = sum * 10 + (n % 10);
      n = n / 10;
    }
  if (temp == sum)
    printf ("palimdrome");
  else
    printf ("not palindrome");
}

