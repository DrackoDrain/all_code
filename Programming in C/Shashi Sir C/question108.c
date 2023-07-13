// Write a program to swap two variable using third variable using call by value(including parameter) //

#include<stdio.h>
int swap(int x,int y);
int x,y,z;
void main()
{
    printf("enter two numbers");
    scanf("%d%d",&x,&y);
    swap(x,y);
    printf("x=%d\n",x);
    printf("y=%d\n",y);
}
int swap(int x,int y)
{
    z=x;
    x=y;
    y=z;
    printf("x=%d\n",x);
    printf("y=%d\n",y);
}
