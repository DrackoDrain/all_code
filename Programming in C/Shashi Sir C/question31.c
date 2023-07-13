// write a program to find largest number among two numbers using conditional operator//
#include<stdio.h>
void main()
{
    int x,y,z;
    printf("enter the value of x and y");
    scanf("%d%d",&x,&y);
    z=(x>y)?x:y;
    printf("largest number =%d",z);
}