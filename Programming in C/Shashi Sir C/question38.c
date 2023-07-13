// Write a program to find the sum of n natural numbers using for loop //

#include<stdio.h>
void main()
{
    int i,n,s=0;
    printf("enter any number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+i;       
    }
    printf("sum=%d",s);
}