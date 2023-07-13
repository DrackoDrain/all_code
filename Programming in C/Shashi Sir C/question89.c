// Write a program to compare two string using pointers //

#include<stdio.h>
void main()
{
    char x[20],y[20],*p,*q;
    int f=0;
    
    printf("enter a string in x");
    scanf("%s",x);
    printf("enter a string in y");
    scanf("%s",y);
    p=&x[0];
    q=&y[0];
    while(*p!='\0' || *q!='\0')
    {
     if(*p!=*q)
        {
            f=1;
            break;
        }
        
    }
    if(f==1)
    {
        printf("Both strings are Not equal");
    }
    else
    {
        printf("Both strings are Equal");
    }

}