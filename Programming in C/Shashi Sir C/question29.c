// wrire a program to perform addition substraction multiplication division on pressing key 1,2,3,4 respectively.
#include<stdio.h>
void main()
{
    int a,b,c,ch;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    printf(" enter the choice");
    scanf(" %d",&ch);
    switch(ch)
    {
        case 1:
        c=a+b;
        printf("addition =%d",c);
        break;
        case 2:
        c=a-b;
        printf("substraction =%d",c);
        break;
        case 3:
        c=a*b;
        printf(" multiplication=%d",c);
        break;
        case 4:
        c=a/b;
        printf("DIVISION=%d",c);
        break;
        default:
        printf(" INVALID CHOICE");

    }

}
