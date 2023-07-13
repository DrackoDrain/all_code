// Function taking no argument and no returntype //

#include<stdio.h>
void sum();
void main()
{
    sum();
}
void sum()
{
    int a,b,sum;
    printf("Enter the value of a and b");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("sum=%d",sum);
}