// Write a program to compare two strings using character array //

#include<stdio.h>
void main()
{
    char x[20],y[20];
    int i,f=0;
    printf("enter a string in x");
    scanf("%s",x);
    printf("enter a string in y");
    scanf("%s",y);
    for(i=0;x[i]!='\0' && y[i]!='\0';i++)
    {
        if(x[i]!=y[i])
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        printf("both string are not equal");
    }
    else {
        printf("both string are equal");
    }
}