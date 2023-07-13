// Write a program to check whether the number is Armstrong or not //

#include<stdio.h>
void main()
{
    int t,n,s=0,p;
    printf("enter any number");
    scanf("%d",&n);
    p=n;
    while(n>0)
    {
        t=n%10;
        s=s+(t*t*t);
        n=n/10;
    }
    if(p==s)
    {
        printf(" Given number is Armstrong number");
    }
    else
    {
        printf("Given number is not Armstrong number");
    }
}