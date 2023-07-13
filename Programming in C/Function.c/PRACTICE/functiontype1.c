// function taking no argument with no return type //

#include<stdio.h>
void sum(void);
void main()
{
    sum();
}
void sum()
{
    int i,j,sum=0;
    printf("enter the value of i and j");
    scanf("%d%d",&i,&j);
    sum=i+j;
    printf("sum=%d",sum);
}