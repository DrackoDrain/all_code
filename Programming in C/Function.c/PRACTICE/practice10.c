// Write a program to check the number whether it is odd or even using function (bottom up approach) //

#include<stdio.h>
int i;
void num(int i)
{
    printf("enter the value of i");
    scanf("%d",&i);
    if(i%2==0)
    {
        printf("Given number is Even");
    }
    else
    {
        printf("GIven number is Odd");
    }
}
void main()
{
    num(i);
}