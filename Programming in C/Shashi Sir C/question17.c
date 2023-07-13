//write a program to find largest numbmer among two numbers using conditional operator//
//we can use a third variable like z and store the condition like z=(x>y)?x:y// 
#include<stdio.h>
void main()
{
    int x,y,z;
    printf("enter the two numbers ");
    scanf("%d%d",&x,&y);
    z=(x>y)?x:y;
    printf("largest number=%d",z);
}
