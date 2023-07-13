// write a program to find sum of n natural numbers using goto statement //
#include<stdio.h>
void main()
{
    int s=0,n,k=1;
    printf("enter the numbers");
    scanf("%d",&n);
    xx : s=s+k;
    k++;
    if(k<=n)
    {
        goto xx;
    }
    printf("sum=%d",s);
    
}