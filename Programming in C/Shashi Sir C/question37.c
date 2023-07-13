// Write a program to find the sum using while loop //
// 1+2+3+4+5+.....+n //

#include<stdio.h>
void main()
{
    int i=1,s=0,n;
    printf("enter the value of n");
    scanf("%d",&n);
    while(i<=n)
    {
        s=s+i;
        i++;
    }
    printf("sum=%d",s);
}