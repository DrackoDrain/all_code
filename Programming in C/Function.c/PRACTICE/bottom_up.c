// Function taking no argument and no returntype //

#include<stdio.h>
int a,b,sum=0;
void pot()
{
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("sum=%d",sum);
}
void main()
{
    pot();
}