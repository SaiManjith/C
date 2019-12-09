#include<stdio.h>
main()
{
    int pid,qty,count=0;
    char pname[20],ch='y';
    float price,amount,tamount=0;
    while(ch == 'y'|| ch == 'Y')
    {
        printf("\n enter product id :");
        scanf("%d",&pid);
        printf("\n enter product name :");
        scanf("%s",&pname);
        printf("\n enter product price :");
        scanf("%f",&price);
        printf("\n enter product quantity :");
        scanf("%d",&qty);
        amount=qty*price;
        tamount+=amount;
        count++;
        printf("\n Do you wish to continue?(y/n):");
        ch=getche();
        //fflush(stdin);
        //scanf("%c",&ch);
    printf("\n no. of items purchased :%d",count);
    printf("total bill:%f",tamount);
    }
}
