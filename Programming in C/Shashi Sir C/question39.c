// Write a program to find sum of its own digit //

#include<stdio.h>
void main()
{
    int n,s=0,t;
    printf("enter the value of n");
    scanf("%d",&n);
    while(n>0)
    {
        t=n%10;
        s=s+t;
        n=n/10;
    }
    printf("sum=%d",s);
    
}
