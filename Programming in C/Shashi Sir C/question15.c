//Write a program to swap two numbers using third variable//
#include<stdio.h>
void main()
{
    int x,y;
    printf("\n enter the value of x and y");
    scanf("%d%d",&x,&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("x=%d",x);
    printf(" \n y=%d",y);
}