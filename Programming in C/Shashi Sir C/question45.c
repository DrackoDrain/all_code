// Write a program to check the given number is perfect or not //
// Perfect number is a postive integer that is equal to the sum of all its proper positive divisiors excluding the number itself //
// For example 6=1+2+3 //

#include<stdio.h>
void main()
{
    int i,n,s=0;
    printf("Enter the value of n ");
    scanf("%d",&n);
    for(i=1;i<=n-1;i++)
    {
        if(n%i==0)
        {
            s=s+i;
        }
    }
    if(s==n)
    {
        printf("Perfect Number");
    }
    else
    {
        printf("Not Perfect Number");
    }
}
