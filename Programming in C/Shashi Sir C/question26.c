// Write a  program to find largest among 3 numbers using nested if else statement//
#include<stdio.h>
void main()
{
    int m,n,b;
    printf("enter the three numbers");
    scanf("%d%d%d",&m,&n,&b);
    if(m>b)
    {
        if(m>n)
        {
            printf("m is greatest=%d",m);
        }
        else{
            printf("n is greatest=%d",n);
        }
    }
    else{
        if(b>n)
        {
            printf("greatest=%d",b);

        }
        else
        {
            printf("greatest=%d",n);
            
        }
    }
}