// Write a program to reverse a number //

#include<stdio.h>
void main()
{
    int t,n,r=0;
    printf("enter any number");
    scanf("%d",&n);
    while(n>0)
    {
        t=n%10;
        r=r*10+t;
        n=n/10;
    }
    printf("Reverse number=%d",r);
}