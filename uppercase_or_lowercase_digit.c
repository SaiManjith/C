#include<stdio.h>
main()
{
    char ch;
    printf("Enter a character:\n");
    scanf("%c",&ch);
    if(ch>=65 && ch <= 90)
    {
        printf("upeercase");
    }
    if(ch>=97 && ch <= 122)
    {
        printf("lowercase");
    }
    if(ch>=48 && ch <=57)
    {
        printf("Digit");
    }
}
