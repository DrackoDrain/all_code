// Write a program to find the sum using do while loop //
// 1+2+3+4+5+6+7+......+n //

#include<stdio.h>
void main()
{
    int i=1,n,s=0;
    printf("enter the value of n");
    scanf("%d",&n);
    do
    {
        s=s+i;
        i++;
    }
    while(i<=n);
    printf("sum=%d",s);
}