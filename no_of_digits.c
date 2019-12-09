/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i;
    printf("enter a:\n");
    scanf("%d",&i);
    if(i>=0 && i<=9)
    printf("singe digit");
    else if(i>=10 && i<=99)
    printf("double digit");
    else if(i>=100 && i<=999)
    printf("three digit");
    if(i>=1000 && i<=9999)
    printf("four digit");
    
}
